#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int down(const void* a, const void* b)
{
	unsigned long long num_1 = *(int*)a;
	unsigned long long num_2 = *(int*)b;
	unsigned long long temp;

	if (num_1 == 0 || num_2 == 0)
	{
		if (num_1 == num_2)
			return 0;

		if (num_1 > num_2)
			return -1;

		return 1;
	}

	unsigned long long first_1 = pow(10, (int)(log10(num_1)));
	unsigned long long first_2 = pow(10, (int)(log10(num_2)));

	if (num_1 / first_1 > num_2 / first_2)
		return -1;

	if (num_1 / first_1 < num_2 / first_2)
		return 1;

	temp = num_1;
	num_1 = num_1 + ((first_1 * 10) * num_2);
	num_2 = num_2 + ((first_2 * 10) * temp);

	if (num_1 > num_2)
		return 1;

	if (num_1 < num_2)
		return -1;

	return 0;
}

int main(void)
{
	int K, N, list[50], i, max = 0, loc = 0;

	scanf("%d %d", &K, &N);
	for (i = 0; i < K; i++)
	{
		scanf("%d", &list[i]);
		if (max < list[i])
			max = list[i];

	}

	qsort(list, K, sizeof(int), down);

	for(i=0; i<K; i++)
		if (list[i] == max)
		{
			loc = i;
			break;
		}

	N -= K;

	for (i = 0; i < loc; i++)
		printf("%d", list[i]);

	max = i;

	for (i = 0; i < N; i++)
		printf("%d", list[loc]);

	for (i = max; i < K; i++)
		printf("%d", list[i]);
}