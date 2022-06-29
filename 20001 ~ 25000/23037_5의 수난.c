main()
{
	int n,sum = 0;

	scanf("%d", &n);

	while (n > 0)
	{
		sum += (int)pow(n % 10, 5);
		n /= 10;
	}

	printf("%d", sum);

}