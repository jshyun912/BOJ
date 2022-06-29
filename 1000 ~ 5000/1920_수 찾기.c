#include <stdio.h>
#include <stdlib.h>

int bin_searh(int num, int low, int high, int list[])
{
	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (num == list[mid])
			return mid;
		else if (num > list[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

int up(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}

int main()
{
	int N, A[100000], M, X;
	int i;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	qsort(A, N, sizeof(int), up);

	scanf("%d", &M);
	
	for (i = 0; i < M; i++)
	{
		scanf("%d", &X);
		
		X = bin_searh(X, 0, N - 1, A);

		if (X == -1)
			printf("0\n");
		else
			printf("1\n");
	}
}