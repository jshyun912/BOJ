#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char sik[51], num[6];
	int i, j = 0;
	int minus = 0, plus = 0;
	int size;

	scanf("%s", &sik);

	size = strlen(sik);

	for (i = 0; i < size; i++)
	{
		if (sik[i] == '+' || sik[i] == '-')
		{
			num[j] = '\0';
			plus += atoi(num);
			j = 0;

			if (sik[i] == '-')
			{
				minus++;
				i++;
				break;
			}
		}

		else
		{
			num[j] = sik[i];
			j++;
		}
	}

	for (; i < size; i++)
	{
		if (sik[i] == '+' || sik[i] == '-')
		{
			num[j] = '\0';
			minus += atoi(num);
			j = 0;
		}

		else
		{
			num[j] = sik[i];
			j++;
		}
	}

	if (minus != 0)
	{
		num[j] = '\0';
		minus += atoi(num) - 1;
		j = 0;
	}

	else
	{
		num[j] = '\0';
		plus += atoi(num);
		j = 0;
	}

	printf("%d", plus - minus);
}