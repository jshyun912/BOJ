#include <stdio.h>

int ans[2] = { 0 };
int mat[128][128];

void check(int a, int b, int c)
{
	int num = mat[a][b], i, j;

	j = b;

	for (i = a; i < a + c; i++)
		for (j = b; j < b + c; j++)
			if (mat[i][j] != num)
				goto A;

	ans[num]++;
	return;

A: for (i = a; i < a + c; i += (c / 2))
		for (j = b; j < b + c; j += (c / 2))
			check(i, j, c / 2);
}

int main()
{
	int N, i, j;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &mat[i][j]);

	check(0, 0, N);
	printf("%d %d", ans[0], ans[1]);
}