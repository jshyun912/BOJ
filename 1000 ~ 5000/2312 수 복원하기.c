#pragma warning(disable:4996)
#include <stdio.h>
#include <stdbool.h>

main()
{
	int input, N[1000];
	bool prime[100001] = { 0 };
	int i, j, k = 0, temp, count, output = 0;

	prime[1] = true;

	for (i = 2; i * i <= 100000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 100000; j++)
				prime[i * j] = true;
	}

	scanf("%d", &input);
	for (i = 0; i < input; i++)
		scanf("%d", &N[i]);

	for (k = 0; k < input; k++)
	{
		i = N[k];
		count = 0;
		temp = i;

		while (temp % 2 == 0)
		{
			count++;
			temp /= 2;
		}

		if (count > 0)
		{
			printf("2 %d\n", count);
			count = 0;
		}

		for (j = 3; j <= temp; j += 2)
		{
			if (prime[j] == true)
				continue;

			while (temp % j == 0)
			{
				count++;
				temp /= j;
			}

			if (count > 0)
			{
				printf("%d %d\n",j, count);
				count = 0;
			}
		}
	}
}