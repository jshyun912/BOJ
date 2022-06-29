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
	int N, P[1000];
	int i, sum = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &P[i]);

	qsort(P, N, sizeof(int), up);

	for (i = 1; i < N; i++)
		P[i] += P[i - 1];

	for (i = 0; i < N; i++)
		sum += P[i];

	printf("%d", sum);
}