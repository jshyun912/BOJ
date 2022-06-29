#include <stdio.h>
#include <stdbool.h>

int main()
{
	int N, A[10000];
	bool prime[1000001] = { 0 }, check[1000001] = { 0 };
	long long count = 1;
	int i, j;

	prime[1]++;

	for (i = 2; i * i <= 1000000; i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= 1000000; j++)
				prime[i * j]++;
	}

	scanf("%d" , &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (prime[A[i]] == false && check[A[i]] == false)
		{
			count *= A[i];
			check[A[i]]++;
		}
			
	}

	if (count == 1)
		count = -1;

	printf("%lld", count);
}