#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int T, I[1000000][5];
	bool prime[1000004] = { 0 };
	int sum;
	int i, j;

	prime[1]++;

	for (i = 2; i * i <= 1000003; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 1000003; j++)
				prime[i * j]++;
	}

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &I[i][j]);
			while (1)
			{
				if (prime[I[i][j]] == 0)
				{
					sum += I[i][j];
					break;
				}

				I[i][j]++;	
			}
		}
		printf("%d\n", sum);
	}
}