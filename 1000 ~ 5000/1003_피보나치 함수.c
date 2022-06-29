#include <stdio.h>

int zero[41] = { 1 ,0 };
int one[41] = { 0, 1, 0 };

int fib_0(int n)
{
	if (n >= 2 && zero[n] == 0)
		zero[n] = fib_0(n - 1) + fib_0(n - 2);

	return zero[n];
}

int fib_1(int n)
{
	if (n >= 2 && one[n] == 0)
		one[n] = fib_1(n - 1) + fib_1(n - 2);

	return one[n];
}

int main()
{
	int T, N;
	scanf("%d", &T);
	
	while (T--)
	{
		scanf("%d", &N);
		printf("%d %d\n", fib_0(N), fib_1(N));
	}
}