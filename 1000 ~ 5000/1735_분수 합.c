#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int A[2], B[2];
	int up, down;
	int yakbun = 0;

	scanf("%d %d", &A[0], &B[0]);
	scanf("%d %d", &A[1], &B[1]);

	down = B[0] * B[1] / gong(B[0], B[1]);
	up = down / B[0] * A[0] + down / B[1] * A[1];

	while (yakbun != 1)
	{
		yakbun = gong(up, down);
		if (yakbun != 1)
		{
			up /= yakbun;
			down /= yakbun;
		}
	}

	printf("%d %d", up, down);
}