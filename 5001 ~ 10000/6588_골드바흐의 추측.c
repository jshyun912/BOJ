#include <stdio.h>

int main(void)
{
	int n[100001];
    int prime[1000001] = {0};
    int last, max=-1, count;
    int i,j;

    prime[1]++;
    
    for(i=0;;i++)
    {
        scanf("%d", &n[i]);
        if(n[i] == 0)
        {
            last = i;
            break;
        }

        if(n[i] > max)
            max = n[i];
    }

    for(i=2; i*i<=max; i++)
    {
        if(prime[i] == 0)
        {
            for(j=2; i*j<=max; j++)
                prime[i*j]++;
        }
    }

    for(i=0; i<last; i++)
    {
        count = 0;
        for(j=3; j<n[i]; j++)
        {
            if(prime[j] != 0)
                continue;
            if(prime[n[i]-j] == 0)
            {
                printf("%d = %d + %d\n", n[i], j, n[i]-j);
                count++;
                break;
            }
        }

        if(count == 0)
            printf("Goldbach's conjecture is wrong.\n");
    }
}