#include <stdio.h>

typedef struct {
	int start;
	int end;
}session;

void qsort(void* base, size_t num, size_t width, int(*)(const void*, const void*));

int up(const void* a, const void* b)
{
	session num1 = *(session*)a;
	session num2 = *(session*)b;

	if (num1.end < num2.end)
		return -1;

	if (num1.end > num2.end)
		return 1;
	else
	{
		if (num1.start < num2.start)
			return -1;

		if (num1.start > num2.start)
			return 1;
	}
	return 0;
}

int main()
{
	int N, i;
	int now, count;

	session se[100000];

	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
		scanf("%d %d", &se[i].start, &se[i].end);

	qsort(se, N, sizeof(session), up);

	count = 1;
	now = se[0].end;

	for (i = 1; i < N; i++)
		if (se[i].start >= now)
		{
			now = se[i].end;
			count++;
		}

	printf("%d", count);
}