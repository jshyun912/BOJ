main()
{
    long long a=1, b=1, c=1,d, f;
    f=2;
    while(f--)
    {
        scanf("%lld", &d);
        a*=d;
    }
    
    f=2;
    while(f--)
    {
        scanf("%lld", &d);
        b*=d;
    }
    
    f=3;
    while(f--)
    {
        scanf("%lld", &d);
        c*=d;
    }
    
   printf("%lld", a*c + b*c);

}