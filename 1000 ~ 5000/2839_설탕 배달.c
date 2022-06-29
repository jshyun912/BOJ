int main()
{
	int N;
	int i;

	scanf("%d", &N);

	for (i = N / 5; i > 0; i--)
		if ((N - (i * 5)) % 3 == 0)
		{
			printf("%d", i + (N - (i * 5)) / 3);
			return 0;
		}

	if (N % 3 == 0)
	{
		printf("%d", N / 3);
		return 0;
	}

	printf("-1");
}