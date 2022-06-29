int main()
{
	int N;
	scanf("%d", &N);

	if (N < 10)
	{
		printf("1");
		return 0;
	}

	if (N % 9 == 0)
	{
		printf("%d", N / 9);
		return 0;
	}

	if ((N % 9) % 2 == 1)
	{
		printf("%d", N / 9 + 1);
		return 0;
	}

	if (N % 2 == 1)
		printf("%d", N / 9 + 2);

	else
		printf("%d", N / 9 + 1);
}