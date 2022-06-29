int main()
{
	int N, age;
	int list_age[201][100500] = {0};
	int age_how[201] = { 0 };
	char name[100500][105];
	int i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		scanf("%d %s", &age, name[i]);
		age_how[age]++;
		for (j = 0; j < i; j++)
			if (list_age[age][j] == 0)
			{
				list_age[age][j] = i;
				break;
			}
	}

	for (i = 1; i <= 200; i++)
		for (j = 0; j < age_how[i]; j++)
			printf("%d %s\n", i, name[list_age[i][j]]);
}