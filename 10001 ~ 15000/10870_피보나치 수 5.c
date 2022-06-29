int fib(int a, int b)
{
	return a + b;
}

main()
{
	int n, list[21] = { 0, 1 }, i;

	scanf("%d", &n);

	if (n < 2)
	{
		printf("%d", n);
		return 0;
	}

	for (i = 2; i <= n; i++)
		list[i] = fib(list[i - 2], list[i - 1]);

	printf("%d", list[n]);
}