long long pow(long long num, long long exp)
{
	long long temp;

	if (exp == 0)
		return 1;

	temp = pow(num, exp / 2);

	if (exp % 2 == 0)
		return temp * temp;

	else
		return temp * temp * num;
}

int main()
{
	long long N, i, sam[40];

	scanf("%lld", &N);
    
    if (N == 0)
    {
        printf("NO");
        return 0;
    }
	
	for (i = 0; i < 40; i++)
		sam[i] = pow(3, i);

	for (i = 39; i >= 0; i--)
		if (N >= sam[i])
			N -= sam[i];

	if (N == 0)
		printf("YES");

	else
		printf("NO");
}