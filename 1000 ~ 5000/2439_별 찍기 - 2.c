main()
{
    int a, i, j;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
            printf(" ");
        for (j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }
}