#include <stdio.h>

int main()
{
	int N, M, A[10000];
	int i;
	int left = 0, right = 0, sum = 0, how = 0;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	while (right < N || sum > M)
	{
		if (sum >= M)
		{
			sum -= A[left];
			left++;
		}

		else
		{
			sum += A[right];
			right++;
		}

		if (sum == M)
			how++;
	}

	printf("%d", how);
}