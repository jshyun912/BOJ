int main()
{
	long long n, x[2], sum = 0;

	scanf("%lld", &n);
	scanf("%lld", &x[0]);
	n--;
	while (n--)
	{
		scanf("%lld", &x[1]);
		sum += ((x[1] - x[0]) * (x[1] - x[0]));
		x[0] = x[1];
	}

	printf("%lld", sum);
}