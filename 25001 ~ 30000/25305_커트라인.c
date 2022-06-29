#include <stdio.h>
#include <stdlib.h>

int down(const void* a, const void* b)
{
	int num_1 = *(int*)a;
	int num_2 = *(int*)b;

	if (num_1 > num_2)
		return -1;

	if (num_1 < num_2)
		return 1;

	return 0;
}

int main()
{
	int N, k, x[10000], i;

	scanf("%d %d", &N, &k);

	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);

	qsort(x, N, sizeof(int), down);

	printf("%d", x[k - 1]);
}