#include <stdio.h>

int main(void)
{
    int K;
    int i,j;
    int prime[7368788] = {0};
    int count = 0;

    scanf("%d", &K);
    
    for(i=2;i*i<=7368787;i++)
    {
        if(prime[i] == 0)
        {
            for(j=2; i*j<=7368787; j++)
                prime[i*j]++;
        }
    }

    for(i=2;count<K;i++)
    {
        if(prime[i] == 0)
            count++;
    }

    printf("%d", i-1);

}