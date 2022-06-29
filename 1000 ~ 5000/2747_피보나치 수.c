#include <stdio.h>

int list[46] = { 0, 1, 1, 0 };

int fib(int n)
{
	if (list[n] != 0 || n == 0)
		return list[n];

	list[n] = fib(n - 1) + fib(n - 2);
	return list[n];
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", fib(N));
}