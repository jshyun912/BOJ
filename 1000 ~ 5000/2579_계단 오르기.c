#include <stdio.h>

int main()
{
	int N, S[301] = { 0 };
	int sum[301] = { 0 }, i;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		scanf("%d", &S[i]);

	sum[1] = S[1];
	sum[2] = S[1] + S[2];

	for (i = 3; i <= N; i++)
	{
		if (sum[i - 2] > sum[i - 3] + S[i - 1])
			sum[i] = (sum[i - 2] + S[i]);

		else
			sum[i] = (sum[i - 3] + S[i] + S[i - 1]);
	}

	printf("%d", sum[N]);
}