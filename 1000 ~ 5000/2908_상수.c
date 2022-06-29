main()
{
    int a, b;
    int new_a = 0, new_b = 0;
    int i;

    scanf("%d %d", &a, &b);

    new_a += ((a % 10) * 100);
    a /= 10;
    new_a += ((a % 10) * 10);
    a /= 10;
    new_a += (a % 10);

    new_b += ((b % 10) * 100);
    b /= 10;
    new_b += ((b % 10) * 10);
    b /= 10;
    new_b += (b % 10);

    if (new_a < new_b)
        printf("%d", new_b);
    else
        printf("%d", new_a);
}