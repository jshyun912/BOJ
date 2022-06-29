long long list[117] = { 0, 1, 1, 1, 0 };

long long non_fib(int n)
{
	if (list[n] == 0)
		list[n] = non_fib(n - 1) + non_fib(n - 3);

	return list[n];
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%lld", non_fib(N));
}