#include <stdio.h>
#include <stdbool.h>

main()
{
	int A, B;
	bool prime[100001] = { 0 };
	int i, j, temp, count, output = 0;

	prime[1] = true;

	for (i = 2; i * i <= 100000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 100000; j++)
				prime[i * j] = true;
	}

	scanf("%d %d", &A, &B);

	for (i = A; i <= B; i++)
	{
		if (prime[i] == false)
			continue;

		count = 0;
		temp = i;

		while (temp % 2 == 0)
		{
			count++;
			temp /= 2;
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
		}

		if (prime[count] == false)
			output++;
	}

	printf("%d", output);
}