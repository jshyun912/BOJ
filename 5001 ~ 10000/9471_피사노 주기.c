#include <stdio.h>

int main()
{
	int P, N, M;
	int fib_mod1, fib_mod2, temp, count;

	scanf("%d", &P);

	while (P--)
	{
		scanf("%d %d", &N, &M);

		fib_mod1 = 1;
		fib_mod2 = 1;

		temp = (fib_mod1 + fib_mod2) % M;
		fib_mod1 = fib_mod2;
		fib_mod2 = temp;
		count = 1;

		while (fib_mod1 != 1 || fib_mod2 != 1)
		{
			temp = (fib_mod1 + fib_mod2) % M;
			fib_mod1 = fib_mod2;
			fib_mod2 = temp;
			count++;
		}

		printf("%d %d\n",N, count);
	}
}