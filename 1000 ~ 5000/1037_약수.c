#include <stdio.h>

int main(void)
{
	int N;
	int yaksu;
	int min = 1000001, max = -1;

	int i;

	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		scanf("%d", &yaksu);
		if(yaksu>max) max = yaksu;
		if(yaksu<min) min = yaksu;
	}

	printf("%d", max*min);
}