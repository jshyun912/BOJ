#include <stdio.h>

int main()
{
	int T, P, Q;
	long long fib[10001] = { 0,1,1 };

	scanf("%d", &T);
	for (int j = 1; j <= T; j++)
	{
		scanf("%d %d", &P, &Q);
		for (int i = 3; i <= P; i++)
			fib[i] = (fib[i - 2] + fib[i - 1]) % Q;
		printf("Case #%d: %lld\n", j, fib[P] % Q);
	}
}