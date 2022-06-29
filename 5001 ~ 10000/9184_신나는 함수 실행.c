#include <stdio.h>

int list[21][21][21] = { 0 };

int w(int a, int b, int c)
{
	if (a == 0 || b == 0 || c == 0)
		a = b = c = 0;

	else if (list[a][b][c] == 0)
		list[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

	return list[a][b][c];
}

int main()
{
	int a, b, c;
	list[0][0][0] = 1;

	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == -1 && b == -1 && c == -1)
			break;

		printf("w(%d, %d, %d) = ", a, b, c);

		if (a <= 0 || b <= 0 || c <= 0)
			a = b = c = 0;

		else if (a > 20 || b > 20 || c > 20)
			a = b = c = 20;

		printf("%d\n", w(a, b, c));
	}
}