#include <stdio.h>

int main()
{
	int X, how[1000001], root[1000001];
	int i;

	scanf("%d", &X);

	for (i = 1; i < X; i++)
		how[i] = 2100000000;
	how[X] = 0;
	root[X] = -1;

	for (i = X; i > 1; i--)
	{
		if (i % 3 == 0)
			if (how[i / 3] > how[i] + 1)
			{
				how[i / 3] = how[i] + 1;
				root[i / 3] = i;
			}


		if (i % 2 == 0)
			if (how[i / 2] > how[i] + 1)
			{
				how[i / 2] = how[i] + 1;
				root[i / 2] = i;
			}


		if (how[i - 1] > how[i] + 1)
		{
			how[i - 1] = how[i] + 1;
			root[i - 1] = i;
		}
	}

	printf("%d\n", how[1]);
	while (root[i] != -1)
	{
		how[root[i]] = i;
		i = root[i];
	}

	printf("%d ", X);
	while (i != 1)
	{
		printf("%d ", how[i]);
		i = how[i];
	}
}