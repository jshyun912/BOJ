#include <stdio.h>

int main()
{
	int n, num[100][10] = { 0 };
	int i, j;

	for (i = 1; i < 10; i++)
		num[0][i] += 1;


	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < 9; j++)
			num[i][j] += ((num[i - 1][j + 1] + num[i - 1][j - 1]) % 1000000000);
		num[i][0] += (num[i - 1][1] % 1000000000);
		num[i][9] += (num[i - 1][8] % 1000000000);
	}

	for (i = 0, j = 0; i < 10; i++)
    {
        j += num[n - 1][i];
        j %= 1000000000;
    }
		

	printf("%d", j);

}