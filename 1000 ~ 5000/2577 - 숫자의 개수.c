main()
{
    int a, b, c;
    int gop;
    int list[10] = {0};

    scanf("%d %d %d", &a, &b, &c);

    gop = a * b * c;

    while (gop != 0)
    {
        list[gop % 10]++;
        gop /= 10;
    }
    
    for (a = 0; a < 10; a++)
        printf("%d\n", list[a]);

}