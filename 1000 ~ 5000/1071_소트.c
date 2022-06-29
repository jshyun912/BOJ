#include <stdio.h>

int main()
{
	int N, A, i, j, temp, list[1003] = { 0 };

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A);
		list[A]++;
	}

	for (i = 0; i < 1001; i++)
	{
		if (list[i] == 0)
			continue;

		if (list[i + 1] == 0)
		{
			for (j = 0; j < list[i]; j++)
				printf("%d ", i);
			continue;
		}

		else
		{
			for (temp = i + 2; temp <= 1000; temp++)
				if (list[temp] > 0)
					break;

			if (temp <= 1000)
			{
				for (j = 0; j < list[i]; j++)
					printf("%d ", i);

				printf("%d ", temp);
				list[temp]--;
			}

			else
			{
				for (j = 0; j < list[i + 1]; j++)
					printf("%d ", i + 1);;

				for (j = 0; j < list[i]; j++)
					printf("%d ", i);

				break;
			}
		}
	}
}