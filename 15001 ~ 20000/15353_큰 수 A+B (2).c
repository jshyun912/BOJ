#include <stdio.h>
#include <string.h>

void reverse(char* num)
{
	char temp;
	int i;

	for(i=0; i<strlen(num)/2; i++)
	{
		temp = num[i];
		num[i] = num[strlen(num)-1-i];
		num[strlen(num)-1-i] = temp;
	}
}

main()
{
	char A[11000], B[11000];
	int i;

	scanf("%s", A);
	scanf("%s", B);

	reverse(A);
	reverse(B);

	if(strlen(A) >= strlen(B))
	{
		A[strlen(A)] = 48;
		A[strlen(A)+1] = '\0';

		for(i=0; i<strlen(B); i++)
		{
			A[i] = A[i] + B[i] - 48;

			if(A[i] > 57)
			{
				A[i] = A[i] - 10;
				A[i+1]++;
			}
		}

		for(i=strlen(B); i<strlen(A); i++)
		{
			if(A[i] > 57)
			{
				A[i] = A[i] - 10;
				A[i+1]++;
			}

			else break;
		}

		if(A[strlen(A)-1] == 48)
			A[strlen(A)-1] = '\0';

		reverse(A);

		for(i=0; i<strlen(A); i++)
			printf("%c", A[i]);
	}

	else
	{
		B[strlen(B)] = 48;
		B[strlen(B)+1] = '\0';

		for(i=0; i<strlen(A); i++)
		{
			B[i] = B[i] + A[i] - 48;

			if(B[i] > 57)
			{
				B[i] = B[i] - 10;
				B[i+1]++;
			}
		}

		for(i=strlen(A); i<strlen(B); i++)
		{
			if(B[i] > 57)
			{	
				B[i] = B[i] - 10;
				B[i+1]++;
			}

			else break;
		}

		if(B[strlen(B)-1] == 48)
			B[strlen(B)-1] = '\0';

		reverse(B);

		for(i=0; i<strlen(B); i++)
			printf("%c", B[i]);
	}

}