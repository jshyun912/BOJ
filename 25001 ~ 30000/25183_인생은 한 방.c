int abs(char a)
{
	if (a < 0)
		return a * -1;
	return a;
}

int main(void)
{
	int N, max = 0, i;
	char S[100001];

	scanf("%d", &N);
	scanf("%s", S);

	for (i = 1; i < N; i++)
	{
		if (abs(S[i] - S[i - 1]) == 1)
		{
			max++;
			if (max == 4)
			{
				printf("YES");
				return 0;
			}
		}

		else
			max = 0;
	}

	printf("NO");
}