#include <stdio.h>

int pow(long long num, long long exp)
{
	long long temp;

	if (exp == 0)
		return 1;

	temp = pow(num, exp / 2);

	if (exp % 2 == 0)
		return temp * temp;

	else
		return temp * temp * num;
}

int main()
{
	int N, i, sam[20];

	scanf("%d", &N);
    
    if (N == 0)
    {
        printf("NO");
        return 0;
    }

	
	for (i = 0; i < 20; i++)
		sam[i] = pow(3, i);

	for (i = 19; i >= 0; i--)
		if (N >= sam[i])
			N -= sam[i];

	if (N == 0)
		printf("YES");

	else
		printf("NO");
}