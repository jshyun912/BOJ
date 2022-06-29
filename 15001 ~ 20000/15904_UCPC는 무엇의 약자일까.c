#include <stdio.h>
#include <string.h>

int main()
{
	char UCPC[1002];
	int i, size, big;

	fgets(UCPC, 1000, stdin);
	size = strlen(UCPC);

	for(i=0, big = 0; i<size; i++)
		if (UCPC[i] >= 65 && UCPC[i] < 91)
			UCPC[big++] = UCPC[i];

	for (i = 0; i < big; i++)
		if (UCPC[i] == 85)
			break;

	for (; i < big; i++)
		if (UCPC[i] == 67)
			break;

	for (; i < big; i++)
		if (UCPC[i] == 80)
			break;

	for (; i < big; i++)
		if (UCPC[i] == 67)
		{
			printf("I love UCPC");
			return 0;
		}

	printf("I hate UCPC");
}