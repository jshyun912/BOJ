int main()
{
	int N, M, x[100000];
	int i, min = 1;
	float temp;

	scanf("%d %d", &N, &M);

	for (i = 0; i < M; i++)
		scanf("%d", &x[i]);

	if (x[0] - min > 0)
		min = x[0];

	for (i = 1; i < M; i++)
	{
		if (x[i] - x[i - 1] > min + min)
		{
			temp = x[i] - x[i - 1];
			temp /= 2;
			temp += 0.5;
			min = temp;
		}
	}

	if (x[i - 1] + min < N)
		min = N - x[i - 1];

	printf("%d", min);
}