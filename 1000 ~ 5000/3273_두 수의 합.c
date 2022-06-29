#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool A[1000001] = { 0 };
	int n, x, i;
	int min = 1000000000, count = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		A[x] = 1;

		if (x < min)
			min = x;
	}

	scanf("%d", &x);

	for (i = min; x-i >i; i++)
        if(x-i <= 1000000)
		    if (A[i] == 1 && A[x - i] == 1)
			    count++;

	printf("%d", count);
}