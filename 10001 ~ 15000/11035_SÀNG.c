#include <stdio.h>

int main(void)
{
    int N, K;
    int prime[1001] = {0};
    int i, j;
    int count;
    while(scanf("%d", &N)==1)
    {
        scanf("%d", &K);

        count = 0;
        for(i=2; count < K; i++)
        {
        
            if(prime[i] == 0)
            {
                for(j=1; i*j<=N; j++)
                {
                    if(prime[i*j] == 0)
                    {
                        prime[i*j]++;
                        count++;

                        if(count == K)
                            break;
                    }
                }
            }   

            if(count == K)
            {
                printf("%d\n", i*j);   
                break;
            }  
        }

        for(j=2; j<1001; j++)
            prime[j] = 0;  
    }
}