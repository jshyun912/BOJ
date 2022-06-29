#include <stdio.h>
#include <stdbool.h>

main()
{
	int A, B, D;
	bool prime[4000001] = { 0 };
	int i, j, temp, count = 0;

	prime[1] = true;

	for (i = 2; i * i <= 4000000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 4000000; j++)
				prime[i * j] = true;
	}

	scanf("%d %d %d", &A, &B, &D);

	for (i = A; i <= B; i++)
	{
		if (prime[i] == true)
			continue;

		temp = i;
		while(temp > 0)
		{
			if (temp % 10 == D)
			{
				count++;
				break;
			}

			temp /= 10;
		}
	}

	printf("%d", count);
}