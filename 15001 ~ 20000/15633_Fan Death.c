int main()
{
	int N;
	int i, sum = 0;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		if (N % i == 0)
			sum+=i;

	printf("%d", sum * 5 - 24);
}