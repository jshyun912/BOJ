#include <stdio.h>

int main()
{
	int X, how[1000001];
	int i;

	scanf("%d", &X);

	for (i = 1; i < X; i++)
		how[i] = 2100000000;
	how[X] = 0;

	for (i = X; i > 1; i--)
	{
		if (i % 3 == 0)
			if (how[i / 3] > how[i] + 1)
				how[i / 3] = how[i] + 1;

		if (i % 2 == 0)
			if (how[i / 2] > how[i] + 1)
				how[i / 2] = how[i] + 1;

		if (how[i - 1] > how[i] + 1)
			how[i - 1] = how[i] + 1;
	}

	printf("%d", how[1]);
}