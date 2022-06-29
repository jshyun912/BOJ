#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	bool prime[246913] = { 0 };
	int i, j, count;

	prime[0] = true;

	for (i = 2; i * i <= 246912; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 246912; j++)
			{
				prime[i * j] = true;
			}
	}

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;

		count = 0;
		for (i = n + 1; i <= 2 * n; i++)
		{
			if (prime[i] == false)
				count++;
		}

		printf("%d\n", count);
	}
}