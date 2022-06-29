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
	long long A, N, P;
	int i, j, T;

	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf("%lld %lld %lld", &A, &N, &P);

		for (j = 2; j < N; j++)
		{
			A = pow(A, j, P);
			if (A == 0)
			{
				N = 1;
				break;
			}
		}

		printf("Case #%d: %lld\n", i, pow(A, N, P));
	}
}