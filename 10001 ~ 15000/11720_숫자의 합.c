main()
{
    int num, i, sum = 0;
    char n[102];

    scanf("%d %s", &num, n);

    for (i = 0; i < num; i++)
    {
        sum += ((int)n[i] - 48);
    }

    printf("%d", sum);
}