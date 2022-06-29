#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool prime[4000001] = { 0 };
	int list[283146], size = 0;
	int i, j;
	int left = 0, right = 0, sum = 0, count = 0;
	int N;

	prime[1]++;

	scanf("%d", &N);

	for (i = 2; i * i <= N; i++)
		if (prime[i] == false)
			for (j = 2; i * j <= N; j++)
				prime[i * j] = true;

	for (i = 1; i <= N; i++)
		if (prime[i] == 0)
		{
			list[size] = i;
			size++;
		}

	while (right <= size)
	{
		if (sum < N)
		{
			sum += list[right];
			right++;
		}

		else if (sum >= N)
		{
			if (sum == N)
				count++;
			sum -= list[left];
			left++;

		}
	}

	printf("%d", count);
}