#include <stdio.h>

int main()
{
	int n;
	int a = 1, b = 1, temp, i;
	scanf("%d", &n);

	if (n == 0)
	{
		printf("0\n0");
		return 0;
	}

	if (n < 0)
	{
		if (n % 2 == 0)
			printf("-1\n");
		else
			printf("1\n");
		n *= -1;
	}

	else
		printf("1\n");
		

	for (i = 3; i <= n; i++)
	{
		temp = (a + b) % 1000000000;
		a = b;
		b = temp;
	}

	printf("%d", b);
}