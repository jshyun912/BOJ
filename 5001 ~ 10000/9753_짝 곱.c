#include <stdio.h>
#include <stdbool.h>

main()
{
	int T, K[20];
	bool prime[100002] = { 0 };
	bool count;
	int i, j, k;

	prime[1] = true;

	for (i = 2; i * i <= 100001; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 100000; j++)
				prime[i * j] = true;
	}

	scanf("%d", &T);
	for (i = 0; i < T; i++)
		scanf("%d", &K[i]);

	for (i = 0; i < T; i++)
	{
		count = false;
		for (j = K[i]; count == false; j++)
		{
			for (k = 2; k < j; k++)
			{
				if (prime[k] == true)
					continue;
;
				if (j % k == 0 && prime[j / k] == false && k != j/k)
				{
					count = true;
					printf("%d\n", j);
					break;
				}
			}		
		}
	}
}