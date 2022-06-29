#include <stdio.h>

int main()
{
	int N, M, first, last;
	int sum[100001] = { 0 };
	int i;

	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &sum[i]);
		sum[i] += sum[i - 1];
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &first, &last);
		printf("%d\n", sum[last] - sum[first-1]);
	}
}