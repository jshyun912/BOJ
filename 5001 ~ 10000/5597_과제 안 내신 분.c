main()
{
	int n[31] = {0}, i;

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n[0]);
		n[n[0]]++;
	}

	for (i = 1; i <= 30; i++)
		if (n[i] == 0)
			printf("%d\n", i);
}