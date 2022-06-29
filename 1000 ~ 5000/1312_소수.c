#include <stdio.h>

int main()
{
	int A, B, N;
	int i;
	int quo, rest;

	scanf("%d %d %d", &A, &B, &N);

	rest = A % B;
	quo = A / B;

	for (i = 0; i < N; i++)
	{
		rest *= 10;
		quo = rest / B;
		rest %= B;
	}

	printf("%d", quo);
}