#include <stdio.h>

long long pow(long long num, long long exp, long long div)
{
	long long temp;

	if (exp == 0)
		return 1;

	temp = pow(num, exp / 2, div);

	if (exp % 2 == 0)
		return (temp * temp) % div;

	else
		return ((temp * temp) % div) * (num % div) % div;
}

int main()
{
	long long prime[1000001][2] = { 0, };
	int N;
	long long output = 1;
	long long i, j;

	scanf("%d", &N);

	for (i = 2; i * i <= 1000000; i++)
		if (prime[i][0] == 0)
			for (j = 2; i * j <= 1000000; j++)
				prime[i * j][0] = 1;

	for (i = 2; i <= N; i++)
		if (prime[i][0] == 0)
		{
			for (j = i; j <= N; j *= i)
				prime[i][1]++;

			output *= (pow(i, prime[i][1], 987654321));
			output %= 987654321;
		}

	printf("%lld", output);
}