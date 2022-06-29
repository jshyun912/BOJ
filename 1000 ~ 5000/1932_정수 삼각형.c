#include <stdio.h>
int max(int a, int b)
{
	if (a < b)
		return b;
	return a;
}

int main()
{
	int n, tri[500][500], sum[500][500], max_sum = -1;
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++)
			scanf("%d", &tri[i][j]);

	sum[0][0] = tri[0][0];

	for (i = 1; i < n; i++)
	{
		sum[i][0] = tri[i][0] + sum[i - 1][0];
		for (j = 1; j < i; j++)
			sum[i][j] = tri[i][j] + max(sum[i - 1][j - 1], sum[i - 1][j]);
		sum[i][i] = tri[i][i] + sum[i - 1][i - 1];
	}

	for (i = 0; i < n; i++)
		if (sum[n - 1][i] > max_sum)
			max_sum = sum[n - 1][i];

	printf("%d", max_sum);
}