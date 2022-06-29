#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int ishappy(int input)
{
	int size = (int)log10((double)input);
	int result = 0;
	int i;

	for (i = (int)pow(10, (double)size); input / 10 > 0; i/=10)
	{
		result += (int)pow((double)(input/i), 2);
		input %= i;
	}
	result += (int)pow((double)input, 2);
	
	if (result == 1)
		return 1;

	if (result == 4)
		return -1;

	return ishappy(result);
}


int main()
{
	int n;
	bool prime[1000001] = { 0 };
	int i, j;

	scanf("%d", &n);

	for (i = 2; i <= sqrt(n); i++)
	{
		if (prime[i] == false)
			for (j = 2; i * j <= n; j++)
				prime[i * j] = true;
	}

	for (i = 7; i <= n; i++)
	{
		if (prime[i] == true)
			continue;
		if (ishappy(i) == 1)
			printf("%d\n", i);
	}
}