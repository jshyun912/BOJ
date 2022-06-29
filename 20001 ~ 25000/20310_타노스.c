#include <stdio.h>
#include <string.h>

int main()
{
	char S[501];
	int i, j, size, num_0 = 0, num_1;
	scanf("%s", S);
	size = strlen(S);

	for (i = 0; i < size; i++)
		if (S[i] == '0')
			num_0++;
		
	num_1 = (size - num_0) / 2;
	num_0 /= 2;
	size--;

	for (i = 0; num_1 > 0; i++)
		if (S[i] == '1')
		{
			S[i] = '3';
			num_1--;
		}


	for (i = 0; num_0 > 0; i++)
		if (S[size - i] == '0')
		{
			S[size-i] = '3';
			num_0--;
		}

	for (i = 0; i <= size; i++)
		if (S[i] != '3')
			printf("%c", S[i]);
}