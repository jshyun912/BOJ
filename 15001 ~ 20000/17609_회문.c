#include <stdio.h>
#include <string.h>

int check(char pal[], int left, int right)
{
	while (left < right)
	{
		if (pal[left] != pal[right])
			return left;

		left++;
		right--;

	}

	return -1;
}

int main()
{
	int T, size, result;
	char pal[100001];

	scanf("%d", &T);

	while (T--)
	{
		scanf("%s", pal);

		size = strlen(pal) - 1;
		result = check(pal, 0, size);

		if (result == -1)
		{
			printf("0\n");
			continue;
		}

		if (check(pal, result, size - result - 1) == -1)
		{
			printf("1\n");
			continue;
		}

		if (check(pal, result + 1, size - result) == -1)
		{
			printf("1\n");
			continue;
		}

		printf("2\n");
	}
}