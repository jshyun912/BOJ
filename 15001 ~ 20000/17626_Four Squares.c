#include <stdio.h>

int main()
{
	int square[224][224] = { 0 };
	int i, j, k;
	int n;

	scanf("%d", &n);

	for (i = 1; i < 224; i++)
	{
		if (i * i == n)
		{
			printf("1");
			return 0;
		}
		square[i][0] = i * i;
	}
		

	for (i = 1; i < 224; i++)
	{
		for (j = 1; j < 224; j++)
		{
			if (square[i][0] + square[j][0] > 50000)
				break;
			if (square[i][0] + square[j][0] == n)
			{
				printf("2");
				return 0;
			}
			square[i][j] = square[i][0] + square[j][0];
		}
	}

	for (i = 1; i < 224; i++)
	{
		for (j = 1; j < 224; j++)
		{
			for (k = 1; k < 224; k++)
			{
				if (square[i][j] + square[k][0] > 50000)
					break;

				if (square[i][j] + square[k][0] == n)
				{
					printf("3");
					return 0;
				}
			}
		}
	}

	printf("4");
}