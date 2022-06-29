main()
{
    int a = 1, b, max = -1, cu;

    while (a < 10)
    {
        scanf("%d", &b);
        if (b > max)
        {
            max = b;
            cu = a;
        }

        a++;
    }

    printf("%d\n%d", max, cu);
}