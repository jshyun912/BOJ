#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int up(const void* a, const void* b)
{
	char* num_1 = a;
	char* num_2 = b;
	int i, size;

	if (strlen(num_1) > strlen(num_2))
		return 1;

	if (strlen(num_1) < strlen(num_2))
		return -1;

	return strcmp(a, b);
}

int main(void)
{
	int N, i;
	char word[20000][51];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%s", word[i]);

	qsort(word, N, sizeof(word[0]), up);

	printf("%s\n", word[0]);
	for (i = 1; i < N; i++)
	{
		if(strcmp(word[i-1], word[i]) != 0)
			printf("%s\n", word[i]);
	}	
}