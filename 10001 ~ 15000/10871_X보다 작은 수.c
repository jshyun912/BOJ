main()
{
    int a, b, i, min = 10000000, max = -10000000;
    scanf("%d %d", &a, &b);

    for (i=0; i < a; i++)
    {
        scanf("%d", &min);
        if (min < b)
            printf("%d ", min);
    }
}