#include <stdio.h>

int main()
{
	int n, a, sum = 0, max = -5000;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &a);
		sum += a;

		if (sum >= max)
			max = sum;
        
        if (sum < 0)
			sum = 0;
	}

	printf("%d", max);
}