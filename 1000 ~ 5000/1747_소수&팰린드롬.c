#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool ispalin(int input)
{
	char check[10];
	int i;
	sprintf(check, "%d", input);

	for (i = 0; i < strlen(check) / 2; i++)
		if (check[i] != check[strlen(check) - 1 - i])
			return false;

	return true;
}

int main()
{
	int N;
	bool prime[1003002] = { 0 };
	int i, j, count;

	prime[0] = true;

	for (i = 2; i * i <= 1003001; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 1003001; j++)
				prime[i * j] = true;
	}

	scanf("%d", &N);

	if (N <= 2)
	{
		printf("2");
		return 0;
	}

	if (N % 2 == 0)
		N++;

	for (i = N;; i += 2)
	{
		if (ispalin(i) == true)
			if (prime[i] == false)
			{
				printf("%d", i);
				return 0;
			}
	}
}