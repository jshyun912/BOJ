#include <stdio.h>

int main(void)
{
	int N;
	int table[50][2];
	int grade[50] = {0};
	int i,j;

	scanf("%d", &N);

	for(i=0; i<N; i++)
		scanf("%d %d", &table[i][0], &table[i][1]);

	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if(table[i][0] >= table[j][0] || table[i][1] >= table[j][1])
				grade[i]++;
		}
	}

	for(i=0; i<N; i++)
	{
		printf("%d ", N - grade[i] + 1);
	}
}