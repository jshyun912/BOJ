main()
{
	int T[3], num = 0, i;

	while (1)
	{
		scanf("%d %d %d", &T[0], &T[1], &T[2]);
		if (T[0] ==  0 && T[1] == 0 && T[2] == 0)
			return 0;

		if (T[0] >= T[1] && T[0] >= T[2])
		{
			if (T[0] * T[0] == T[1] * T[1] + T[2] * T[2])
				printf("right\n");
			else
				printf("wrong\n");
		}

		else if (T[1] >= T[0] && T[1] >= T[2])
		{
			if (T[1] * T[1] == T[0] * T[0] + T[2] * T[2])
				printf("right\n");
			else
				printf("wrong\n");
		}

		else
		{
			if (T[2] * T[2] == T[1] * T[1] + T[0] * T[0])
				printf("right\n");
			else
				printf("wrong\n");
		}
		
	}
}