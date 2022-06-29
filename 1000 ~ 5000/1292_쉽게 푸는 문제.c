#include <stdio.h>

int main()
{
	int num[500501];
	int A, B;
	int i, j, k, sum = 0;

	for (i = 1, k = 1; i < 1001;i++)
		for (j = 0; j < i; j++)
		{
			num[k] = i;
			k++;
		}

	scanf("%d %d", &A, &B);

	for (i = A; i <= B; i++)
		sum += num[i];

	printf("%d", sum);
}