#include <stdio.h>
#include <stdlib.h>

int* list;

int pisano(int M)
{
	int count, temp;
	int i;

	list = (int*)malloc(sizeof(int) * 4);

	list[0] = 0;
	list[1] = 1;
	list[2] = 1;

	list[3] = (list[1] + list[2]) % M;
	count = 1;
	i = 4;

	while (list[i-2] != 1 || list[i-1] != 1)
	{
		list = realloc(list, sizeof(int) * (i + 1));
		list[i] = (list[i - 2] + list[i - 1]) % M;
		i++;
		count++;
	}

	return count;
}

int main()
{
	unsigned long long n;
	int period = pisano(1000000);

	scanf("%lld", &n);

	n %= period;

	printf("%d", list[n]);

	free(list);
}