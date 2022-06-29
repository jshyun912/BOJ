int main()
{
	int input[10001] = { 0 };
	int N, i, j;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &input[0]);
		input[input[0]]++;
	}

	for (i = 1; i <= 10000; i++)
		if (input[i] != 0)
			for (j = 0; input[i] > j; j++)
				printf("%d\n", i);
}