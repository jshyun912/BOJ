#include <stdio.h>

long long gong(long long num1, long long num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	long long A, B;

	scanf("%lld %lld", &A, &B);

	printf("%lld", A*B/gong(A, B));
}