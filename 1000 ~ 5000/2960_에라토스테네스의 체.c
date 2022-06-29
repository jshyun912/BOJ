#include <stdio.h>

int main(void)
{
    int N, K;
    int prime[1001] = {0};
    int i, j;
    int count = 0;

    scanf("%d %d", &N, &K);

    for(i=2; ; i++)
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
            return 0;
        }            
    }
}