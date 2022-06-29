int fact(int num)
{
	int ans = 1;

	if (num == 0)
		return 1;

	for (; num > 0; num--)
		ans *= num;
	
	return ans;
}

main()
{
    int A;
    scanf("%d", &A);
    
    printf("%d", fact(A));
}