main()
{
	char word[100];
	int i;
	scanf("%s", word);

	for (i = 0; i < strlen(word); i++)
	{
		if (word[i] > 90)
			word[i] -= 32;

		else
			word[i] += 32;

		printf("%c", word[i]);
	}
}