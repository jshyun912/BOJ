#include <stdio.h>

main()
{
	int T, input[1000];
	int prime[1299710];
	int min, max, count;
	int i,j;

	scanf("%d", &T);

	for(i=0; i<T; i++)
		scanf("%d", &input[i]);

	prime[1]++;

	for(i=2; i*i<1299709; i++)
	{
		if(prime[i] == 0)
		{
			for(j=2; i*j<=1299709; j++)
				prime[i*j] = 1;
		}
	}

	for(i=0; i<T; i++)
	{
		count = input[i];

		while(prime[count] != 0)
			count--;
		min = count;
		
		count = input[i];

		while(prime[count] != 0)
			count++;
		max = count;

		printf("%d\n", max-min);
	}
}