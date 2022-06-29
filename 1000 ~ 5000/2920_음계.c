main()
{
    int a[8];
    int i;

    for (i = 0; i < 8; i++)
        scanf("%d", &a[i]);

    if (a[0] < a[1])
    {
        for (i = 2; i < 8; i++)
        {
            if (a[i - 1] > a[i])
            {
                printf("mixed");
                return 0;
            }
        }
        printf("ascending");
    }

    else
    {
        for (i = 2; i < 8; i++)
        {
            if (a[i - 1] < a[i])
            {
                printf("mixed");
                return 0;
            }
        }
        printf("descending");
    }
}