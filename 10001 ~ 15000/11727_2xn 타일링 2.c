#include <stdio.h>

int main()
{
	int n;
	int a = 1, b = 3, temp, i;
	scanf("%d", &n);

	if (n == 1)
	{
		printf("1");
		return 0;
	}

	if (n == 2)
	{
		printf("3");
		return 0;
	}

	for (i = 3; i <= n; i++)
	{
		temp = ((a*2) + b) % 10007;
		a = b;
		b = temp;
	}

	printf("%d", b);
}