main()
{
    long long N, M;
    
    scanf("%lld %lld", &N, &M);
    
    M -=N;
    if(M<0)
        M*=-1;
    
    printf("%lld", M);
}