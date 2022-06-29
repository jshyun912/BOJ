#include <stdio.h>

int main()
{
	int N, i;
	char word[11] = "SciComLove";

	scanf("%d", &N);

	N %= 10;

	for (i = N; i < 10; i++)
		printf("%c", word[i]);

	for (i = 0; i < N; i++)
		printf("%c", word[i]);
}