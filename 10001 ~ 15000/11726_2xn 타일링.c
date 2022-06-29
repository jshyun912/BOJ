#include <stdio.h>

int main()
{
	int n;
	int a = 1, b = 2, temp, i;
	scanf("%d", &n);

	if (n == 1)
	{
		printf("1");
		return 0;
	}

	if (n == 2)
	{
		printf("2");
		return 0;
	}

	for (i = 3; i <= n; i++)
	{
		temp = (a + b) % 10007;
		a = b;
		b = temp;
	}

	printf("%d", b);
}