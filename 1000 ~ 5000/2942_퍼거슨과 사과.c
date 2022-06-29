#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int R, G;
	int i;

	scanf("%d %d", &R, &G);

	for (i = gong(R, G); i > 0; i--)
		if (R % i == 0 && G % i == 0)
			printf("%d %d %d\n", i, R / i, G / i);
}