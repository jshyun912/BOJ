long long pow(long long num, long long exp, long long div)
{
	long long temp;

	if (exp == 0)
		return 1;

	temp = pow(num, exp / 2, div);

	if (exp % 2 == 0)
		return (temp * temp) % div;

	else
		return ((temp * temp) % div) * (num % div) % div;
}

int main()
{
	int T;
	long long N, sum;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%lld", &N);

		if (N < 3)
		{
			printf("1\n");
			continue;
		}

		printf("%lld\n", pow(2, N - 2, 1000000007));
	}
}