#include <stdio.h>

int main()
{
	int N, K;
	int tri[1001][1002] = { {1}, {1, 1} };
	int i, j;

	scanf("%d %d", &N, &K);

	for (i = 2; i <= N; i++)
	{
		tri[i][0] = 1;
		for (j = 1; j <= i || j <= K; j++)
			tri[i][j] = (tri[i - 1][j] + tri[i - 1][j - 1]) % 10007;
		tri[i][K+1] = 1;
	}

	printf("%d", tri[N][K]);
}