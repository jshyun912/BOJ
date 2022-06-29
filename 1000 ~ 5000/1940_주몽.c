#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, M, i, temp;
	int* list;

	scanf("%d %d", &N, &M);

	if (M > 199999)
	{
		for (i = 0; i < N; i++)
			scanf("%d", &temp);

		printf("0");
		return 0;
	}

	list = (int*)calloc(M + 1, sizeof(int));

	for (i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		list[temp]++;
	}

	temp = 0;

	for (i = 1; i <= M / 2; i++)
	{
		if (list[i] != 0 && list[M - i] != 0)
			temp++;
	}

	if (M % 2 == 0)
		temp--;

	printf("%d", temp);

	free(list);
}