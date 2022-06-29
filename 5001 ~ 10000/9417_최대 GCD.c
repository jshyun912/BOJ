#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long gong(long long num1, long long num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
} // GCD 구하는 함수

int main()
{
	long long N, M[99];
	int i, j, size;
	long long max;
	char temp[1500], ok[13];

	scanf("%lld", &N);
	getchar();

	while (N > 0)
	{
		fgets(temp, 1500, stdin);
		size = 0;


		for (i = 0, j = 0; i <= strlen(temp); i++)
		{
			if (temp[i] == ' ' || temp[i] == '\0')
			{
				ok[j] = '\0';
				M[size] = atoi(ok);
				size++;	
				j = 0;
			}

			else
			{
				ok[j] = temp[i];
				j++;
			}
		}

		max = -1;

		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
				if (max < gong(M[i], M[j]))
					max = gong(M[i], M[j]);
		}

		printf("%lld\n", max);

		N--;
	}
}