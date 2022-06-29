#include <stdio.h>

int min(int a, int b)
{
	if (a > b)
		return b;
	return a;
}

int main()
{
	int n, money[1000][3], sum[1000][3];
	int i;

	scanf("%d", &n);

	scanf("%d %d %d", &money[0][0], &money[0][1], &money[0][2]);

	for (i = 0; i < 3; i++)
		sum[0][i] = money[0][i];

	for (i = 1; i < n; i++)
		scanf("%d %d %d", &money[i][0], &money[i][1], &money[i][2]);

	sum[1][0] = min(money[0][1], money[0][2]) + money[1][0];
	sum[1][1] = min(money[0][0], money[0][2]) + money[1][1];
	sum[1][2] = min(money[0][0], money[0][1]) + money[1][2];

	for (i = 2; i < n; i++)
	{
		sum[i][0] = money[i][0] + min(sum[i - 1][1], sum[i - 1][2]);
		sum[i][1] = money[i][1] + min(sum[i - 1][0], sum[i - 1][2]);
		sum[i][2] = money[i][2] + min(sum[i - 1][1], sum[i - 1][0]);
	}

	if (sum[n - 1][0] <= sum[n - 1][1] && sum[n - 1][0] <= sum[n - 1][2])
	{
		printf("%d", sum[n - 1][0]);
		return 0;
	}

	if (sum[n - 1][1] <= sum[n - 1][0] && sum[n - 1][1] <= sum[n - 1][2])
	{
		printf("%d", sum[n - 1][1]);
		return 0;
	}

	printf("%d", sum[n - 1][2]);
}