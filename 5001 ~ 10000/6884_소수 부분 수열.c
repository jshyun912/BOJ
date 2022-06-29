#pragma warning(disable:4996)
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int T, n[20], I[20][10000];
	bool *prime;
	int sum, streak, start, min = 10001;
	int i, j, k;

	prime = (bool*)calloc(100000001, sizeof(bool));

	prime[1]++;

	for (i = 2; i * i <= 100000000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 100000000; j++)
				prime[i * j]++;
	}

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &n[i]);
		for (j = 0; j < n[i]; j++)
			scanf("%d", &I[i][j]);

		if (n[i] == 1)
		{
			printf("This sequence is anti-primed.\n");
			continue;
		}

		if (n[i] == 2)
		{
			if(prime[I[i][0]+I[i][1]] == 0)
				printf("Shortest primed subsequence is length 2: %d %d\n", I[i][0], I[i][1]);
			else
				printf("This sequence is anti-primed.\n");
			continue;
		}

		min = n[i] + 1;

		for (j = 0; j < n[i]; j++)
		{
			for (k = 1, sum = I[i][j], streak= 0; k < min && k + j < n[i]; k++)
			{
				sum += I[i][j + k];
				if (prime[sum] == 0)
				{
					streak = k + 1;
					break;
				}
			}

			if (streak != 0 && streak < min)
			{
				min = streak;
				start = j;
			}

			if(min == 2)
				break;
		}

		if (min == n[i] + 1)
			printf("This sequence is anti-primed.\n");

		else
		{
			printf("Shortest primed subsequence is length %d:", min);
			for (j = 0; j < min; j++)
				printf(" %d", I[i][start + j]);
			printf("\n");
		}
	}

	free(prime);
}
