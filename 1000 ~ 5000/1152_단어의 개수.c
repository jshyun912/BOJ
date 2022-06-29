main()
{
	char N[1000005];
	int i = 0, count = 0, current = 0;

	scanf("%[^\n]s", &N);
	
	while (N[i] != '\0')
	{
		if (N[i] == ' ')
		{
			if (current != 0)
			{
				current = 0;
				count++;
			}
		}

		else
			current++;

		i++;
	}

	if (current != 0)
		count++;

	printf("%d", count);


}