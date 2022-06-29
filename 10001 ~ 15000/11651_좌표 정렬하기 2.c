#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}coord;

int up(const void* a, const void* b)
{
	coord num1 = *(coord*)a;
	coord num2 = *(coord*)b;

	if (num1.y > num2.y)
		return 1;

	if (num1.y < num2.y)
		return -1;

	if (num1.x < num2.x)
		return -1;

	if (num1.x > num2.x)
		return 1;

	return 0;
}

int main()
{
	int N, i;
	coord I[100000];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d %d", &I[i].x, &I[i].y);

	qsort(I, N, sizeof(coord), up);

	for (i = 0; i < N; i++)
		printf("%d %d\n", I[i].x, I[i].y);
}