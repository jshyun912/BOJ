#include <stdio.h>

main()
{
	int N, input[100];
	int prime[1001] = {0};
	int count = 0;
	int i, j;

	scanf("%d", &N);

	for(i = 0; i < N; i++)
		scanf("%d", &input[i]);

	prime[1]++;

	for(i=2; i*i<1000; i++)
	{
		if(prime[i] == 0)
		{
			for(j=2; i*j<=1000; j++)
				prime[i*j] = 1;
		}

	}

	for(i=0; i<N; i++)
	{
		if(prime[input[i]] == 0)
			count++;
	}

	printf("%d", count);

}