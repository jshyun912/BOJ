#include <stdio.h>
#include <stdlib.h>

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
	int A[100000];
	int N, M, input;
	int i;
	int left = 0, right = 0, dif = 0, min = 2100000000;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	qsort(A, N, sizeof(int), up);

	while (1)
	{
		if (dif < min && dif >= M)
			min = dif;

		if (dif == M)
			break;

		else if (dif < M)
		{
			right++;
			if (right == N)
				break;

			dif -= A[right-1];
			dif += A[right];
		}

		else if (dif > M)
		{
;			left++;
			dif += A[left-1];
			dif -= A[left];
		}
	}

	printf("%d", min);
}