#include <stdio.h>

long long list[1000001] = { 0, 1, 1, 0 };

long long fib(int n)
{
	if (list[n] != 0 || n == 0)
		return list[n];

	list[n] = (fib(n - 1) + fib(n - 2)) % 1000000007 ;
	return list[n];
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%lld", fib(N));
}