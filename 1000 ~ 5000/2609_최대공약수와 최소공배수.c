#include <stdio.h>
int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int A, B;

	scanf("%d %d", &A, &B);


	printf("%d %d", gong(A, B), (A * B) / gong(A, B));
}