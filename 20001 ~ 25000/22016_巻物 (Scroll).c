int main(void)
{
	char scroll[101];
	int N, K, i;

	scanf("%d %d", &N, &K);
	K--;
	scanf("%s", scroll);

	for (i = K; i < N; i++)
	{
		if (scroll[i] >= 97)
			scroll[i] -= 32;

		else
			scroll[i] += 32;
	}

	printf("%s", scroll);
}