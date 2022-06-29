#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	int i, j, digit[10], restart, size;
	long long temp, num = 10;

	scanf("%d", &N);

	if (N < 10)
	{
		printf("%d", N);
		return 0;
	}

	if (N > 1022)
	{
		printf("-1");
		return 0;
	}

	for (i = 10; i <= N; i++)
	{
		restart = 1;
		while (restart != 0)
		{
			restart = 0;
			size = log10(num);
			temp = num;
			for (j = 0; j < size; j++)
			{
				digit[j] = temp % 10;
				temp /= 10;
				if (digit[j] >= temp % 10)
				{
					num = (temp + 1) * pow(10, j+1);
					restart++;
				}		
			}
		}

		num++;
	}

	printf("%lld", num - 1);
}