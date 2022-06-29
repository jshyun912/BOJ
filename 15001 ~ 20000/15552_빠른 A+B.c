main()
{
    int T, A, B;
    
    scanf("%d", &T);
    
    while(T>0)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
        T--;
    }
}