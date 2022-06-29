#include <stdio.h>
#include <string.h>

int main()
{
	int M, S = 0, x;
	char order[7];

	scanf("%d", &M);

	while (M--)
	{
		scanf("%s %d", order, &x);

		if (strcmp(order, "add") == 0)
			S |= (1 << x);

		else if (strcmp(order, "remove") == 0)
		{
			if (S & (1 << x))
				S &= ~(1 << x);
		}

		else if (strcmp(order, "check") == 0)
		{
			if (S & (1 << x))
				printf("1\n");
			else
				printf("0\n");
		}

		else if (strcmp(order, "toggle") == 0)
		{
			if (S & (1 << x) )
				S &= ~(1 << x);
			else
				S |= (1 << x);
		}

		else if (strcmp(order, "all") == 0)
		{
			S = 2097150;
		}

		else
			S = 0;
	}
}