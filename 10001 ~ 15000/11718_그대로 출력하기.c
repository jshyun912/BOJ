main()
{
	char input[105];

	while (scanf("%[^\n]s", input) != -1)
	{
		printf("%s\n", input);
		getchar();
	}	
}