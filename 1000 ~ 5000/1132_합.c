#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
	long long how;
	char what;
	int no_zero;
}list;

int down(const void* a, const void* b)
{
	list num_1 = *(list*)a;
	list num_2 = *(list*)b;

	if (num_1.how > num_2.how)
		return -1;

	if (num_1.how < num_2.how)
		return 1;

	return 0;
}

int main()
{
	int N, i, j, k;
	long long sum = 0, temp;
	char word[50][13];
	list alp[10];

	for (i = 0; i < 10; i++)
	{
		alp[i].what = 65 + i;
		alp[i].how = 0;
		alp[i].no_zero = 0;
	}

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%s", word[i]);

	for (i = 0; i < N; i++)
	{
		for (j = strlen(word[i]) - 1, k = 0; j > 0; j--, k++)
			alp[word[i][j] - 65].how += (long long)pow(10, k);
		alp[word[i][j] - 65].how += (long long)pow(10, k);
		alp[word[i][j] - 65].no_zero = 1;
	}

	qsort(alp, 10, sizeof(list), down);

	for (i = 0; i < 10; i++)
		if (alp[i].how == 0)
			break;

	if (alp[i - 1].no_zero == 1)
		for(j=i-2;j>=0; j--)
			if (alp[j].no_zero == 0)
			{
				temp = alp[i - 1].how;
				alp[i - 1].how = alp[j].how;
				alp[j].how = temp;
				
				temp = alp[i - 1].what;
				alp[i - 1].what = alp[j].what;
				alp[j].what = temp;

				break;
			}

	qsort(alp, 9, sizeof(list), down);

	for (i = 0, j = 9; i < 10; i++, j--)
		sum += (alp[i].how * j);

	printf("%lld", sum);
}