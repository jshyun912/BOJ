int main()
{
	int N, hand[10000001] = { 1,1 }, i;
	scanf("%d", &N);

	for (i = 2; i <= N; i++)
		hand[i] = (hand[i - 2] + hand[i - 1]) % 10;

	printf("%d", hand[N]);
}