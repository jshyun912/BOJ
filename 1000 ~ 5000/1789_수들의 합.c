int main()
{	
	long long S;
	int ans = 0;

	scanf("%lld", &S);

	while (S > 0)
	{
		ans++;
		S -= ans;
	}

	if (S == 0)
		printf("%d", ans);
	else
		printf("%d", ans - 1);
}