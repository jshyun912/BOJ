#include <stdio.h>

int main()
{
	int N, K, input[1000000];
	int left = 0, right = 0, ryan = 0, sum = 0, count = 1000001;
	int i;

	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		scanf("%d", &input[i]);

	while (right <= N && count != K)
	{
		if (ryan < K)
		{
			if(input[right] == 1)
				ryan ++;

			sum++;
			right++;
		}

		else if (ryan >= K)
		{
			if (input[left] == 1)
				ryan--;

			sum--;
			left++;
		}

		if (ryan == K)
			if (count > sum)
				count = sum;
	}

	if (count == 1000001)
		count = -1;

	printf("%d", count);
}