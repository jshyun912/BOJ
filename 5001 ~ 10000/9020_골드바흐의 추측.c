#include <stdio.h>

int main(void)
{
	int T;

	int max = 0;
	int gold[5000];

	int table[10001] = {0};

	int i,j;
	int temp;

	scanf("%d", &T);
	for(i=0; i<T; i++)
	{
		scanf("%d", &gold[i]);
		if(gold[i] > max) max = gold[i];
	}

	for(i=2; i<=max; i++)
	{
		if(table[i]==0)
		{
			for(j=2*i; j<=max; j+=i)
				table[j]++;
		}
	}

	for(i=0; i<T; i++)
	{
		temp = gold[i]/2;
		while(1)
		{
			if(table[temp] == 0)
			{
				if(table[gold[i]-temp] == 0)
				{
					printf("%d %d\n", temp, gold[i]-temp);
					break;
				}
			}
			temp--;
		}
	}

}