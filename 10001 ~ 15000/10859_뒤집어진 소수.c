#include <stdio.h>
#include <math.h>
long long rev(long long input)
{
	long long output = 0;

	while (input > 0)
	{
		output *= 10;
		if (input % 10 == 3 || input % 10 == 4 || input % 10 == 7)
			return 4;
		if (input % 10 == 6)
			output += 9;
		else if (input % 10 == 9)
			output += 6;
		else
			output += (input % 10);
		input /= 10;
	}

	return output;
}

int isprime(long long input)
{
	long long i;
	for (i = 2; i <= sqrt(input); i++)
		if (input % i == 0)
			return 0;

	return 1;
}

int main()
{
	long long N, rev_N = 0;
	scanf("%lld", &N);

	if (N < 10)
	{
		if (N == 2 || N == 5)
		{
			printf("yes");
			return 0;
		}

		printf("no");
		return 0;
	}

	if (isprime(N) == 0)
	{
		printf("no");
		return 0;
	}

	rev_N = rev(N);

	if (isprime(rev_N) == 0)
	{
		printf("no");
		return 0;
	}

	printf("yes");
}