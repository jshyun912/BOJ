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
	long long A, B, C;

	scanf("%lld %lld %lld", &A, &B, &C);

	printf("%lld", pow(A, B, C));
}