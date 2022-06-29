#include <stdio.h>
#include <string.h>

main()
{
	char word[1000100];
	long long list[26] = { 0 }, size = 0;
	int alp = 0, max = -2, max2 = -5;
	int i = 0;

	scanf("%s", word);
	size = strlen(word);

	for (i = 0; i < size; i++)
	{
		if (word[i] >= 97)
			list[word[i] - 97]++;
		else
			list[word[i] - 65]++;
	}

	for (i = 0; i < 26; i++)
	{
		if (max <= list[i] && list[i] != 0)
		{
			alp = i;
			max2 = max;
			max = list[i];
		}
	}

	if (max2 == max)
	{
		printf("?");
		return 0;
	}

	printf("%c", alp + 65);
}