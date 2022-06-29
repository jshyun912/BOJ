#include <stdio.h>

int prime_check(int a)
{
	if (a == 1)
		return 1;

	for (int i = 2; i * i <= a; i++)
		if (a % i == 0)
			return 1;

	return 0;
}

int main()
{
	int N, num_1, num_2, i;
	scanf("%d", &N);

	if (N < 8)
	{
		printf("-1");
		return 0;
	}

	num_1 = N / 2;
	num_2 = N - num_1;

	if (num_1 % 2 == 1)
	{
		num_1++;
		num_2--;
	}

	if (num_2 % 2 == 1)
	{
		num_2 -= 2;

		while (num_2)
		{
			if (prime_check(num_2) == 1)
			{
				num_2 -= 2;
				num_1 += 2;
			}

			else
				break;
		}

		if (num_2 == 0)
		{
			printf("-1");
			return 0;
		}

		for (i = 2; i * 2 <= num_1; i++)
			if (prime_check(i) == 0 && prime_check(num_1 - i) == 0)
			{
				printf("%d %d ", i, num_1 - i);
				break;
			}

		printf("2 %d", num_2);
	}

	else
	{
		for (i = 2; i * 2 <= num_1; i++)
			if (prime_check(i) == 0 && prime_check(num_1 - i) == 0)
			{
				printf("%d %d ", i, num_1 - i);
				break;
			}

		for (i = 2; i * 2 <= num_2; i++)
			if (prime_check(i) == 0 && prime_check(num_2 - i) == 0)
			{
				printf("%d %d ", i, num_2 - i);
				break;
			}
	}
}