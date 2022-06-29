#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int t, n, input[100];
	int i, j, k;
	long long sum;

	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);

		sum = 0;
		for (j = 0; j < n; j++)
			scanf("%d", &input[j]);

		for (j = 0; j < n - 1; j++)
			for (k = j + 1; k < n; k++)
				sum += gong(input[j], input[k]);

		printf("%lld\n", sum);
	}
}