#include <stdbool.h>
#include <stdio.h>

int main()
{
	int M, N;
	bool prime[10001] = { 0 };
	int i, j;
	int min = 10001, sum = 0;

	prime[1]++;

	for (i = 2; i * i <= 10000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 10000; j++)
				prime[i * j]++;
	}

	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++)
	{
		if (prime[i] == 0)
		{
			if (min > i)
				min = i;

			sum += i;
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
}