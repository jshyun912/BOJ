main()
{
	int A[100][100], B[100][100], N, M;
	int i, j;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &A[i][j]);


	for (i = N; i < N*2; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &B[i-N][j]);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			printf("%d ", A[i][j] + B[i][j]);
		printf("\n");
	}
}