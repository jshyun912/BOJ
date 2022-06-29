#include <stdio.h>
#include <stdbool.h>

int main()
{
	int prime[5000001] = { 0 };
	int list_prime[348513];
	int i, j;

	int N, K;

	prime[1] = 1;

	for (i = 2; i * i <= 5000000; i++)
		if (prime[i] == false)
			for (j = 2; i * j <= 5000000; j++)
				prime[i * j] = 1;

	for (i = 2, j = 0; i <= 5000000; i++)
		if (prime[i] == false)
		{
			list_prime[j] = i;
			j++;
		}
			
	scanf("%d", &N);

	while (N--)
	{
		scanf("%d", &K);
		if (prime[K] == false)
		{
			printf("%d\n", K);
			continue;
		}

		i = 0;
		while (K != 1)
		{
			if (K % list_prime[i] == 0)
			{
				printf("%d ", list_prime[i]);
				K /= list_prime[i];
			}

			else if (prime[K] == false)
			{
				printf("%d", K);
				break;
			}

			else i++;
		}
		printf("\n");
	}
}