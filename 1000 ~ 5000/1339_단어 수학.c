#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
	long long how;
	char what;
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
	long long sum = 0;
	char word[10][12], make[27];
	list alp[26];

	for (i = 0; i < 26; i++)
	{
		alp[i].what = 65 + i;
		alp[i].how = 0;
	}

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%s", word[i]);

	for (i = 0; i < N; i++)
		for (j = strlen(word[i]) - 1, k = 0; j >= 0; j--, k++)
			alp[word[i][j] - 65].how += (long long)pow(10, k);

	qsort(alp, 26, sizeof(list), down);

	for (i = 0, j = 9; alp[i].how != 0; i++, j--)
		sum += (alp[i].how * j);

	printf("%lld", sum);
}