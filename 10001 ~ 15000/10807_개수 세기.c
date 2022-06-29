main()
{
    int N, input[100], v, i, count = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &input[i]);

    scanf("%d", &v);

    for (i = 0; i < N; i++)
        if (input[i] == v)
            count++;

    printf("%d", count);
}