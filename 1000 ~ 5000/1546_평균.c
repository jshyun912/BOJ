main()
{
	int N;
	float input[1000], M = -1, sum = 0;
	int i;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%f", &input[i]);
		if (M < input[i])
			M = input[i];
	}
	
	for (i = 0; i < N; i++)
		sum += (input[i] / M * 100);

	printf("%f", sum / N);
}