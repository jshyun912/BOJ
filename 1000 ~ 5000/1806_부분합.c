int main()
{
	int N, S, list[100000];
	int i, left = 0, right = 0, sum = 0, min, count = 0;

	scanf("%d %d", &N, &S);

	min = N + 1;

	for (i = 0; i < N; i++)
		scanf("%d", &list[i]);

	while (right <= N)
	{
		if (sum < S)
		{
			sum += list[right];
			right++;
			count++;
		}

		else if (sum >= S)
		{		
			sum -= list[left];
			left++;
			count--;
		}

		if (sum >= S && count < min)
		{
			min = count;
			if (min == 1)
				break;
		}
	}

	if (min > N)
		min = 0;
	printf("%d", min);
}