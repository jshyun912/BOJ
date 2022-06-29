#include <stdio.h>

int main()
{
	int N;
	int i, list[5];
	unsigned long long fact = 40320;

	scanf("%d", &N);

	for (i = 9; i <= N; i++)
	{
		fact *= i;
		while (fact % 10 == 0)
			fact /= 10;

		fact %= 1000000000000;
	}

	
	
	for (i = 0; i < 5; i++)
	{
		list[i] = fact % 10;
		fact /= 10;
	}

	for (i = 4; i >= 0; i--)
		printf("%d", list[i]);
}