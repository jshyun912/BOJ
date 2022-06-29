#include <stdio.h>

int main()
{
	int N, coin[100001], i;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		coin[i] = 111111;
	coin[i] = 0;

	while(i >= 7)
	{
		if (coin[i - 7] > coin[i] + 1)
			coin[i - 7] = coin[i] + 1;

		if (coin[i - 5] > coin[i] + 1)
			coin[i - 5] = coin[i] + 1;

		if (coin[i - 2] > coin[i] + 1)
			coin[i - 2] = coin[i] + 1;

		if (coin[i - 1] > coin[i] + 1)
			coin[i - 1] = coin[i] + 1;

		i--;
	}

	while (i >= 5)
	{
		if (coin[i - 5] > coin[i] + 1)
			coin[i - 5] = coin[i] + 1;

		if (coin[i - 2] > coin[i] + 1)
			coin[i - 2] = coin[i] + 1;

		if (coin[i - 1] > coin[i] + 1)
			coin[i - 1] = coin[i] + 1;

		i--;
	}

	while (i >= 2)
	{
		if (coin[i - 2] > coin[i] + 1)
			coin[i - 2] = coin[i] + 1;

		if (coin[i - 1] > coin[i] + 1)
			coin[i - 1] = coin[i] + 1;

		i--;
	}

	if (coin[i - 1] > coin[i] + 1)
		coin[i - 1] = coin[i] + 1;

	printf("%d", coin[0]);
}