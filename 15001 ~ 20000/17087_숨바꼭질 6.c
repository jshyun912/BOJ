#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int N, S, A[100001];
	int i;
	int gap;

	scanf("%d %d", &N, &S);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] > S)
			A[i] -= S;
		else
			A[i] = S - A[i];
	}

	gap = A[0];

	for (i = 1; i < N; i++)
		gap = gong(gap, A[i]);

	printf("%d", gap);
}