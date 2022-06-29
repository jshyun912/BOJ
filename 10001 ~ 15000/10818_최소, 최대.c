main()
{
    int a, b, min = 10000000, max = -10000000;
    scanf("%d", &a);

    for (; a > 0; a--)
    {
        scanf("%d", &b);

        if (b > max)
            max = b;
        if (b < min)
            min = b;
    }
    printf("%d %d", min, max);
}