#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	int N, input[500000], how[8001] = { 0 };
	int i, sum = 0, max = -1, max_1c = 9999, max_2c = 9999, ans;
	float avg;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
		sum += input[i];
		how[input[i] + 4000]++;
	}

	qsort(input, N, sizeof(int), up);

	for (i = 0; i < 8001; i++)
	{
		if (max <= how[i] && how[i] != 0)
			if (max == how[i])
			{
				if (i < max_1c)
				{
					max_2c = max_1c;
					max_1c = i;
				}

				else if (i < max_2c)
					max_2c = i;
			}

			else
			{
				max_1c = i;
				max_2c = 9999;
				max = how[i];
			}
	}

	if (max_2c == 9999)
		ans = max_1c - 4000;
	else
		ans = max_2c - 4000;

	avg = (float)sum / (float)N;
	if (round(avg) == -0)
		avg = 0;

	printf("%.f\n", round(avg));
	printf("%d\n", input[N / 2]);
	printf("%d\n", ans);
	printf("%d", input[N - 1] - input[0]);
}