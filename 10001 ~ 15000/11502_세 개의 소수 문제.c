#include <stdio.h>

main()
{
    int T, T_case[1000];
    int prime[1001] = {0};
    int i, j, k;
    int check;

    prime[1]++;

    scanf("%d", &T);
    for(i=0; i<T; i++)
        scanf("%d", &T_case[i]);

    for(i=2; i*i<=1000; i++)
    {
        if(prime[i] == 0)
        {
            for(j=2; i*j<=1000; j++)
                prime[i*j]++;
        }
    }

    for(i=0; i<T; i++)
    {
        check = 0;
        for(j=2; j<T_case[i]; j++)
        {
            if(prime[j] != 0)
                continue;
            
            for(k=2; k<T_case[i]-j; k++)
            {
                if(prime[k] != 0)
                    continue;    

                if(prime[T_case[i]-j-k] == 0)
                {
                    check++;
                    break;
                }          
            }

            if(check != 0)
                break;
        }

        if(check != 0)
            printf("%d %d %d\n", j, k, T_case[i]-j-k);
        else
            printf("0");
    }
}