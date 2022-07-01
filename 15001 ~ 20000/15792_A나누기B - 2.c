#include<stdio.h>

int main()
{
	int A, B;
	int i;

	scanf("%d %d", &A, &B);
	printf("%d", A / B);

	if (A % B == 0)
		return 0;

	printf(".");
	A = (A % B) * 10;

	for (i = 0; i < 2000; i++)
	{
		printf("%d", A / B);
		if (A % B == 0)
			return 0;
		A = (A % B) * 10;
	}
}