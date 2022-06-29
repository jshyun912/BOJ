#include <stdio.h>
#include <stdlib.h>

long long l_abs(long long a)
{
	if (a < 0)
		return a * -1;
	return a;
}

typedef struct
{
	long long X;
	long long A;
}town;

int up(const void* a, const void* b)
{
	town num_1 = *(town*)a;
	town num_2 = *(town*)b;

	if (num_1.X < num_2.X)
		return -1;

	if (num_1.X > num_2.X)
		return 1;

	return 0;
}

int main(void)
{	
	int N, i, ans;
	long long UP = 0, DOWN = 0, min;
	town t[100000];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%lld %lld", &t[i].X, &t[i].A);
		UP += t[i].A;
	}
		
	qsort(t, N, sizeof(town), up);

	ans = t[0].X;
	UP -= t[0].A;
	min = UP;

	for (i = 1; i < N; i++)
	{
		DOWN += t[i - 1].A;
		UP -= t[i].A;
		if (l_abs(UP - DOWN) < min)
		{
			min = (l_abs(UP - DOWN));
			ans = t[i].X;
		}
	}

	printf("%d", ans);
}