#include <stdio.h>
#include <string.h>

int main()
{
	int N, ans = 0, size, alp[26];
	char word[101];

	scanf("%d", &N);
	while (N--)
	{
		for (size = 0; size < 26; size++)
			alp[size] = 0;

		scanf("%s", word);

		size = strlen(word) - 1;

		if (size < 2)
		{
			ans++;
			continue;
		}

		while (size > 0)
		{
			alp[word[size] - 'a']++;
			if (word[size] != word[size - 1])
				if (alp[word[size - 1] - 'a'] > 0)
					break;
			size--;
		}

		if (size == 0)
			ans++;
	}

	printf("%d", ans);
}