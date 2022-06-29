#include <stdio.h>
#include <stdlib.h>

long long l_abs(long long a)
{
	if (a < 0)
		return a * -1;
	return a;		
}

int up(const void* a, const void* b)
{
	long long num_1 = *(long long*)a;
	long long num_2 = *(long long*)b;

	if (num_1 < num_2)
		return -1;

	if (num_1 > num_2)
		return 1;

	return 0;
}

int main()
{
	int N, i, ans[3], left = 0, right, third;
	long long liq[5000], sum, min = 9223372036854775805;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%lld", &liq[i]);

	qsort(liq, N, sizeof(long long), up);

	for (i = 0; i < N - 2; i++)
	{
		left = i + 1;
		right = N - 1;

		while (left != right)
		{
			sum = liq[left] + liq[right] + liq[i];

			if (l_abs(sum) < l_abs(min))
			{
				ans[0] = liq[i];
				ans[1] = liq[left];
				ans[2] = liq[right];
				min = sum;
			}


			if (sum > 0)
				right--;
			else
				left++;
		}

		if (min == 0)
			break;
	}

	printf("%d %d %d", ans[0], ans[1], ans[2]);
}main()
{
    int a[3]={0};
    for(a[1] =0;a[1]<5;a[1]++)
    {
        scanf("%d", &a[2]);
        a[0] += (a[2]*a[2]);
    }
    
    printf("%d", a[0]%10);
        
        
        
}