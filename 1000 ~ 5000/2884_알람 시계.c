main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);

    b -= 45;

    if (b < 0)
    {
        a--;
        b += 60;
    }
    if (a < 0)
        a = 23;
    printf("%d %d", a, b);
}