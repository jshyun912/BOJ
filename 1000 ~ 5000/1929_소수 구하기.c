#include <stdio.h>

int main(void)
{
	int N, M;
	int table[1000001] = {0};
	int i,j;

	scanf("%d %d", &N, &M);

	for(i=2; i<=M; i++)
	{
		if(table[i]==0)
		{
			for(j=2*i; j<=M; j+=i)
				table[j]++;
		}
	}
	table[1] = 1;

	for(i=N; i<=M; i++)
	{
		if(table[i] == 0)
			printf("%d\n", i);
	}
}