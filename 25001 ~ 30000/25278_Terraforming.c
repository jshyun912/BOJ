#include <stdio.h>
#include <string.h>

int main()
{
	int ocean = 0, oxygen = 0, temperture = -30, n, size;
	char input[16];

	scanf("%d", &n);
	getchar();

	while (n--)
	{
		fgets(input, 16, stdin);
		size = strlen(input) - 2;
		if (input[0] == 't')
			temperture += (input[size] - 48);
		else if (input[1] == 'x')
			oxygen += (input[size] - 48);
		else
			ocean += (input[size] - 48);
	}

	if (ocean >= 9 && oxygen >= 14 && temperture >= 8)
		printf("liveable");
	else
		printf("not liveable");
}