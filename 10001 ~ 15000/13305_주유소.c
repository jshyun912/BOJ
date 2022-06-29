#include <stdio.h>

int main(void)
{	
	int city[100000], road[99999], point, i;
	long long sum = 0, length = 0, price = 1000000001 ; 


	scanf("%d", &point);

	for (i = 0; i < point - 1; i++)
		scanf("%d", &road[i]);

	for (i = 0; i < point; i++)
		scanf("%d", &city[i]);

	for (i = 0; i < point - 1; i++)
	{
		if (city[i] < price)
		{
			sum += (price * length);
			price = city[i];
			length = 0;
		}

		length += road[i];
	}

	sum += (price * length);
	printf("%lld", sum);
}