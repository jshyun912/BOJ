#include <stdio.h>

int main()
{
	int N;
	int i, j;
	int sum, how = 0;

	scanf("%d", &N);

	for (i = 1; N >= i + i + 1; i++)
	{
		sum = i;
		for (j = i + 1; N > sum; j++)
			sum += j;

		if (sum == N)
			how++;
	}

	printf("%d", how + 1);
}