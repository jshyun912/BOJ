int main()
{
	char PC[20];
	int ans = 0, N;

	scanf("%d", &N);

	while (N--)
	{
		scanf("%s", PC);
		if (strcmp(PC, "her") == 0)
			ans++;
		else if (strcmp(PC, "he") == 0)
			ans++;
		else if (strcmp(PC, "him") == 0)
			ans++;
		else if (strcmp(PC, "she") == 0)
			ans++;
	}

	printf("%d", ans);
}