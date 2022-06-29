#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool prime[1000001] = { 0 };
	long long pow_prime[78498];
	long long yesyes[1000001] = { 0 }, count = 0;
	long long min, max;
	long long i, j, k = 0;

	for (i = 2; i * i <= 1000000; i++)
		if (prime[i] == false)
			for (j = 2; i * j <= 1000000; j++)
				prime[i * j] = 1;

	for (i = 2; i <= 1000000; i++)
		if (prime[i] == 0)
		{
			pow_prime[k] = i * i;
			k++;
		}

	scanf("%lld %lld", &min, &max);

	for (i = 0; pow_prime[i] <= max && i<78498; i++)
	{
		j = min / pow_prime[i];
		if (j * pow_prime[i] != min)
			j++;

		for (; pow_prime[i] * j <= max; j++)
			yesyes[pow_prime[i] * j - min]++;
	}

	for (i = 0; i <= max-min; i++)
		if (yesyes[i] == 0)
			count++;

	printf("%lld", count);
}