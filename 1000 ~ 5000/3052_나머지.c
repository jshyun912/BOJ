main()
{
    int a, b[43] = {0};
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        b[a % 42]++;
    }

    a = 0;

    for (i = 0; i < 42; i++)
    {
        if (b[i] != 0)
            a++;
    }

    printf("%d", a);

}