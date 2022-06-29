#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int T, N;
	int i, j;
	int num = 0;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		num = 0;
		scanf("%d", &N);
		for (j = 1; j <= N / j; j++)
			if (N % j == 0)
				if (gong(j, N / j) == 1)
					num++;

		printf("%d\n", num);
	}
}