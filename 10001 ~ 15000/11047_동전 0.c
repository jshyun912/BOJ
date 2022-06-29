int main()
{
	int N, K, A[10];
	int i, ans = 0;

	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	for (i = N - 1; i >= 0; i--)
		if (A[i] <= K)
		{
			ans += (K / A[i]);
			K %= A[i];
		}

	printf("%d", ans);
}