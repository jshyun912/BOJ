int main()
{
	int N, num, list[2001] = { 0 };

	scanf("%d", &N);
	
	while(N--)
	{
		scanf("%d", &num);
		list[num + 1000]++;
	}

	for (N = 0; N <= 2000; N++)
		if (list[N] != 0)
			printf("%d ", N - 1000);
}