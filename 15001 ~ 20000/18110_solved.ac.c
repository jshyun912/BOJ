#include <stdio.h>
#include <stdlib.h>

int up(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}

int main()
{
	int n, level[300000];
	int i;
	int non_avg, sum = 0;
	float ans;

	scanf("%d", &n);

	if (n == 0)
	{
		printf("0");
		return 0;
	}

	for (i = 0; i < n; i++)
		scanf("%d", &level[i]);

	qsort(level, n, sizeof(int), up);

	ans = n * 0.15;
	non_avg = (int)(ans + 0.5);

	for (i = non_avg; i < n - non_avg; i++)
		sum += level[i];
	
	i = n - non_avg * 2;
	ans = (float)sum / (float)i;
	non_avg = (int)(ans + 0.5);

	printf("%d", non_avg);
}