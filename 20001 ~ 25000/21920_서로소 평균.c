#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int N, A[1000000], X;
	int i;
	double sum = 0, num = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	scanf("%d", &X);

	for (i = 0; i < N; i++)
		if (gong(A[i], X) == 1)
		{
			sum += A[i];
			num++;
		}

	printf("%f", sum / num);
}