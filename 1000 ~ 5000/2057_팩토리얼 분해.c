#include <stdio.h>

main()
{
    long long N;
    long long fact[20] = {1,1};
    int i;

    scanf("%lld", &N);
    if(N==0)
    {
        printf("NO");
        return 0;
    }

    for(i=2; i<=19; i++)
        fact[i] = fact[i-1]*i;


    for(i=19; i>=0; i--)
    {
        if(N<fact[i])
            continue;
        
        N = N-fact[i];
    }

    if(N==0)
        printf("YES");
    else
        printf("NO");  
}