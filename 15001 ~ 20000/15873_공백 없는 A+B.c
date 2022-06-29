#include <stdio.h>
#include <string.h>

main()
{
	char A[5];

	scanf("%s", A);
	if (strlen(A) == 4)
	{
		printf("20");
		return 0;
	}

	else if (strlen(A) == 3)
	{
		if(A[2] == 48)
		{
			printf("%d", (int)(A[0] - 48) + 10);
			return 0;
		}
		printf("%d", (int)(A[2] - 48) + 10);
		return 0;
	}

	else
		printf("%d", (int)(A[0] + A[1] - 96));

}