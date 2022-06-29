#include <stdio.h>
#include <string.h>

main()
{
	char T[5];
	int i;
	int size;

	while (1)
	{
		scanf("%s", T);
		if (T[0] == 48 && T[1] == '\0')
			return 0;
		
		size = strlen(T);

		for (i = 0; i < size / 2; i++)
		{
			if (T[i] != T[size - i - 1])
			{
				printf("no\n");
				break;
			}
		}
		if (i == size / 2)
			printf("yes\n");
	}
}