#include <stdio.h>
#include <string.h>

int main()
{
	int n, size, i, j, count, only;
	char bee[8], word[25];

	scanf("%s", bee);
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", word);

		size = strlen(word);
		if (size < 4)
			continue;

		count = 0;

		for (i = 0; i < size; i++)
		{
			only = 0;

			if (word[i] == bee[0])
				count++;

			else
			{
				for (j = 1; j < 7; j++)
					if (word[i] == bee[j])
					{
						only++;
						break;
					}

				if (only == 0)
					break;
			}
		}

		if (count != 0 && size == i)
			printf("%s\n", word);
	}
}