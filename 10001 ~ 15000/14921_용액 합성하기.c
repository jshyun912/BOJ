#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, A;
	int i;
	int AP[100001], AM[100001], size_P = 0, size_M = 0;
	int P = 0, M = 0, sum, ans;

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

	if (size_P == 0)
	{
		printf("%d", AM[size_M - 1] + AM[size_M - 2]);
		return 0;
	}

	if (size_M == 0)
	{
		printf("%d", AP[0] + AP[1]);
		return 0;
	}

	for (i = 0; i < size_M / 2; i++)
	{
		A = AM[i];
		AM[i] = AM[size_M - 1 - i];
		AM[size_M - 1 - i] = A;
	}

	AP[size_P] = 1000000000;
	AM[size_M] = 1000000000;

	sum = AP[0] + AM[0];
	ans = sum;

	while (P < size_P && ans != 0)
	{
		if (abs(sum) < abs(AP[P] + AM[M + 1]))
		{
			if (abs(sum) < abs(ans))
				ans = sum;
			P++;
			sum = AP[P] + AM[M];
		}

		else
		{
			M++;
			sum = AP[P] + AM[M];
		}
	}

	if (AP[0] + AP[1] < abs(ans))
		ans = AP[0] + AP[1];

	if (abs(AM[0] + AM[1]) < abs(ans))
		ans = AM[0] + AM[1];

	printf("%d", ans);
}