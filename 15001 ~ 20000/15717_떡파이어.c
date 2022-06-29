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
	long long N;
	scanf("%lld", &N);
	if (N == 0)
		printf("1");
	else
		printf("%lld", pow(2, N - 1, 1000000007));
}