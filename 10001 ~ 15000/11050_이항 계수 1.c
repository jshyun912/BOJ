int fact(int num)
{
	int ans = 1;

	if (num == 0)
		return 1;

	for (; num > 0; num--)
		ans *= num;
	
	return ans;
}

int main()
{
	int N, K;

	scanf("%d %d", & N, &K);

	printf("%d", fact(N) / (fact(K) * fact(N - K)));
}