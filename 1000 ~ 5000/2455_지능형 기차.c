int main()
{
	int a, b, c = 0, max = -1;
	for(int i=0; i<4; i++)
	{
		scanf("%d %d", &a, &b);
		c -= a;
        c += b;
		if (c > max)
			max = c;
	}
	
	printf("%d", max);
}