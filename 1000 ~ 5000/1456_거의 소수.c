#pragma warning(disable:4996)
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
	long long A, B;
	bool prime[10000001] = { 0 };
	int count = 0, temp = 0;
	long long i, j;

	prime[1] = true;

	for (i = 2; i * i <= 10000000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 10000000; j++)
				prime[i * j] = true;
	}

	scanf("%lld %lld" , &A, &B);

	for (i = 2; i*i <= B; i++)
	{
		if (prime[i] == true)
			continue;

		for (j = i * i; j <= B; j *= i)
		{
			if (j >= A)
				count++;

			if (j > LLONG_MAX/ i)
				break;
		}
	}

	printf("%d", count);
}