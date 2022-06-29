main()
{
	char word[1005];
	int T, i;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%s", word);
		printf("%c%c\n", word[0], word[strlen(word) - 1]);
	}

}