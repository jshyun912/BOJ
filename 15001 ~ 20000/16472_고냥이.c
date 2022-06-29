#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	char meow[100001];
	int left = 0, right = 0, max = -1;
	int alp[26] = { 0 }, duped = 0;
	int i;
	int size;

	scanf("%d %s", &N, meow);

	size = strlen(meow);

	while (right <= size)
	{
		duped = 0;

		for (i = 0; i < 26; i++)
			if (alp[i] > 0)
				duped++;

		if (duped > N)
		{
			if (max < right - left - 1)
				max = right - left - 1;
			alp[meow[left]-97]--;
			left++;
		}

		else
		{
			alp[meow[right] - 97]++;
			right++;
		}
			
	}

	if (left == 0)
		max = size;

	printf("%d", max);
}