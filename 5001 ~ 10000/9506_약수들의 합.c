#include <stdio.h>

int main()
{
	int n, cd[100], sum;
	int i, j;
	while (1)
	{
		scanf("%d", &n);
		if (n == -1)
			break;

		for (i = 1, j = 0; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				cd[j] = i;
				j++;
			}
		}

		sum = j;

		if (cd[j - 1] * cd[j - 1] == n)
			j--;

		for (i = j-1; i > 0; i--)
		{
			cd[sum] = n / cd[i];
			sum++;
		}

		j = sum;
		sum = 0;

		for (i = 0; i < j; i++)
			sum += cd[i];

		if (sum != n)
			printf("%d is NOT perfect.\n", n);

		else
		{
			printf("%d = 1", n);
			for (i = 1; i < j; i++)
				printf(" + %d", cd[i]);
			printf("\n");
		}
	}
}