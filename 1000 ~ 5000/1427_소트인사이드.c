#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int down(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return -1;

	if (num1 < num2)
		return 1;

	return 0;
}

int main()
{
	char N[11];
	int n[10], size, i;

	scanf("%s", N);

	size = strlen(N);

	for (i = 0; i < size; i++)
		n[i] = N[i] - 48;

	qsort(n, size, sizeof(int), down);

	for (i = 0; i < size; i++)
		printf("%d", n[i]);
}