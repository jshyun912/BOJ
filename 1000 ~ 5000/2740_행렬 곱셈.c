#include <stdio.h>

int main()
{
	int N, M, K, A[100][100], B[100][100];
	int i, j, k;
	int ans[100][100] = { 0 };

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &A[i][j]);

	scanf("%d %d", &M, &K);

	for (i = 0; i < M; i++)
		for (j = 0; j < K; j++)
			scanf("%d", &B[i][j]);

	for (i = 0; i < N; i++)
		for (j = 0; j < K; j++)
			for (k = 0; k < M; k++)
				ans[i][j] += A[i][k] * B[k][j];

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < K; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}
}