#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool prime[2000001] = { 0 };
	int list[150000];
	long long A, B, sum;
	int T, i, j, num;

	prime[1] = 1;

	for (i = 2; i * i <= 2000000; i++)
		if (prime[i] == 0) 
			for (j = 2; i * j <= 2000000; j++)
				prime[i * j] = 1;

	for (i = 2, num = 0; i <= 2000000; i++)
		if (prime[i] == 0)
		{
			list[num] = i;
			num++;
		}

	scanf("%d", &T);

	while (T--)
	{
		scanf("%lld %lld", &A, &B);
		sum = A + B;

		if (sum % 2 == 0)
		{
            if (sum == 2)
                printf("NO\n");
            else
			    printf("YES\n");
			continue;
		}

		sum -= 2;
		
		if (sum <= 2000000)
		{
			if (prime[sum] == 0)
				i = num;
			else
				i = 0;
		}

		else
			for (i = 0; i < num; i++)
				if (sum % list[i] == 0)
					break;

		if (i == num)
			printf("YES\n");

		else
			printf("NO\n");
	}
}