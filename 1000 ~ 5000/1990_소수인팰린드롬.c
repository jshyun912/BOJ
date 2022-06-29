#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ispalin(int input)
{
	char check[10];
	int i;
	sprintf(check, "%d", input);

	for (i=0; i<strlen(check)/2;i++)
		if (check[i] != check[strlen(check)-1-i])
			return false;

	return true;
}

main()
{
	int a, b;
	bool* prime;
	int i, j;

	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
		a++;
	if (b > 10000000)
		b = 10000000;

	prime = (bool*)calloc(b+1, sizeof(bool));

	for (i = 2; i * i <= b; i++)
	{
		if (prime[i] == false)
			for (j = 2; j * i <= b; j++)
				prime[i * j] = true;
	}

	for (i = a; i <= b; i+=2)
	{
		if (ispalin(i) == true)
			if (prime[i] == false)
				printf("%d\n", i);
	}

	printf("-1");

	free(prime);
}