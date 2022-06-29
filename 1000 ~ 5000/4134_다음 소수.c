#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int T;
	unsigned long long* n;
	bool nope;
	unsigned long long i, j, k;

	scanf("%d", &T);

	n = (long long*)calloc(T, sizeof(long long));

	for (i = 0; i < T; i++)
	{
		scanf("%lld", &n[i]);

		if (n[i] <= 2)
		{
			printf("2\n");
			continue;
		}

		if (n[i] % 2 == 0)
			n[i]++;

		for (j = n[i]; ; j+=2)
		{
			nope = 0;

			for (k = 2; k * k <= j; k++)
				if (j % k == 0)
				{
					nope++;
					break;
				}

			if (nope == 0)
			{
				printf("%lld\n", j);
				break;
			}
		}
	}

	free(n);
}