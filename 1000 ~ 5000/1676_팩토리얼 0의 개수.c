#include <stdio.h>

int main()
{
	int N;
	int i, count = 0;
	unsigned long long fact = 24;

	scanf("%d", &N);

	if (N <= 4)
	{
		printf("0");
		return 0;
	}

	for (i = 5; i <= N; i++)
	{
		fact *= i;
		while (fact % 10 == 0)
		{
			fact /= 10;
			count++;
		}

		fact %= 1000000000000;
	}

	printf("%d", count);
}