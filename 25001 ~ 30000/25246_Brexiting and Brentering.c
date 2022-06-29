int main()
{
	char s[56];
	int size;

	scanf("%s", s);
	size = strlen(s) - 1;

	while (1)
	{
		if (s[size] == 'a' || s[size] == 'i' || s[size] == 'e' || s[size] == 'o' || s[size] == 'u')
		{
			s[size + 1] = 'n';
			s[size + 2] = 't';
			s[size + 3] = 'r';
			s[size + 4] = 'y';
			s[size + 5] = '\0';

			printf("%s", s);
			break;
		}

		size--;
	}
}