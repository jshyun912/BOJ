int main(void)
{
	int N, c = 0, n = 0;
	char S;
	scanf(" %d", &N);

	while (N--)
	{
		scanf(" %c", &S);
		if (S == 'C')
			c++;
		else
			n++;
	}

	if (n == 0)
		printf("%d", c);

	else if (c == 0)
		printf("0");

	else if (n == 1)
	{
		if (c % 2 == 0)
			printf("%d", c / 2);
		else
			printf("%d", c / 2 + 1);
	}

	else if (c - 1 <= n)
		printf("1");

	else if ((float)(c / 2) <= (float)(n))
		printf("2");

	else if (c % (n + 1) == 0)
		printf("%d", c / (n + 1));

	else
		printf("%d", c / (n + 1) + 1);
}