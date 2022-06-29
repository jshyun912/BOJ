int main()
{
	int N;
	int num[10] = { 0 };
	float temp;
	int max = -1;

	scanf("%d", &N);

	while (N)
	{
		num[N % 10]++;
		N /= 10;
	}

	temp = num[6] + num[9];
	temp /= 2;
	temp += 0.5;
	num[6] = (int)temp;

	for (N = 0; N < 9; N++)
		if (num[N] > max)
			max = num[N];

	printf("%d", max);
}