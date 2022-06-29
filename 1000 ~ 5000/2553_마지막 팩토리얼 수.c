#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int score;
	int num;
	int aff;

}result;

int down(const void* a, const void* b)
{
	result num_1 = *(result*)a;
	result num_2 = *(result*)b;

	if (num_1.score < num_2.score)
		return 1;

	if (num_1.score > num_2.score)
		return -1;

	return 0;
}

int main(void)
{
	int N, i, is_win[101] = { 0 };
	result list[100];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d %d %d", &list[i].aff, &list[i].num, &list[i].score);

	qsort(list, N, sizeof(result), down);

	for (i = 0, N = 0; N < 3; i++)
		if (is_win[list[i].aff] < 2)
		{
			is_win[list[i].aff]++;
			printf("%d %d\n", list[i].aff, list[i].num);
			N++;
		}
}