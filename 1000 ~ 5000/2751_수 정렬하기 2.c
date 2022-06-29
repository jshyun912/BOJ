#include <stdio.h>
#include <stdlib.h>

int up(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}

int main()
{
	int N, input[1000000];
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &input[i]);

	qsort(input, N, sizeof(int), up);

	for (i = 0; i < N; i++)
		printf("%d\n", input[i]);
}