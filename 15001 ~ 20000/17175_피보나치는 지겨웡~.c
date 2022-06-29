#include <stdio.h>

int like_fib[51] = { 1, 1, 0 };

int non_fib(int n)
{
	if (like_fib[n] == 0)
		like_fib[n] = (non_fib(n - 2) + non_fib(n - 1) + 1) % 1000000007;

	return like_fib[n];
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", non_fib(n));
}