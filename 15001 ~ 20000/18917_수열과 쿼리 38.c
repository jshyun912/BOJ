#include <stdio.h>

int main()
{
	int M = 0;
	long long X[2], sum_4 = 0, sum_3 = 0;
	int i;

	scanf("%d", &M);

	for (i = 0; i < M; i++)
	{
		scanf("%lld", &X[0]);

 		if (X[0] == 1)
		{
			scanf("%lld", &X[1]);
			sum_3 += X[1];
			sum_4 ^= X[1];
		}

		else if (X[0] == 2)
		{
			scanf("%lld", &X[1]);
			sum_3 -= X[1];
			sum_4 ^= X[1];
		}

		else if (X[0] == 3)
			printf("%lld\n", sum_3);

		else
			printf("%lld\n", sum_4);
	}
}