#include <stdio.h>
#include <stdlib.h>

int plus(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}

int minus(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return -1;

	if (num1 < num2)
		return 1;

	return 0;
}

long long big_abs(long long input)
{
	if (input > 0)
		return input;

	return input * -1;
}

int main()
{
	int N, A;
	int i;
	long long AP[100001], AM[100001], size_P = 0, size_M = 0;
	long long P = 0, M = 0, sum, ans, liq[2];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A);
		if (A >= 0)
		{
			AP[size_P] = A;
			size_P++;
		}

		else
		{
			AM[size_M] = A;
			size_M++;
		}
	}

	qsort(AP, size_P, sizeof(long long), plus);
	qsort(AM, size_M, sizeof(long long), minus);

	if (size_P == 0)
	{
		printf("%lld %lld", AM[1], AM[0]);
		return 0;
	}

	if (size_M == 0)
	{
		printf("%lld %lld", AP[0], AP[1]);
		return 0;
	}

	AP[size_P] = 50000000000;
	AM[size_M] = 50000000000;

	sum = AP[0] + AM[0];
	ans = sum;
	liq[0] = AM[0];
	liq[1] = AP[0];

	while (P < size_P && ans != 0)
	{
		if (big_abs(sum) < big_abs(AP[P] + AM[M + 1]))
		{
			if (big_abs(sum) < big_abs(ans))
			{
				ans = sum;
				liq[0] = AM[M];
				liq[1] = AP[P];
			}

			P++;
			sum = AP[P] + AM[M];
		}

		else
		{
			M++;
			sum = AP[P] + AM[M];
		}
	}

	if (AP[0] + AP[1] < big_abs(ans))
	{
		liq[0] = AP[0];
		liq[1] = AP[1];
	}

	if (big_abs(AM[0] + AM[1]) < big_abs(ans))
	{
		liq[0] = AM[1];
		liq[1] = AM[0];
	}

	printf("%lld %lld", liq[0], liq[1]);
}