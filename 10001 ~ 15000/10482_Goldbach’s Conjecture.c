#include <stdio.h>

int main(void)
{
	int T, input[100];
    int prime[32001] = {0};
    int max=-1, count, output[100][16000];
    int i,j;

    scanf("%d", &T);
    for(i=0;i<T;i++)
    {
        scanf("%d", &input[i]);

        if(input[i] > max)
            max = input[i];
    }

    for(i=2; i*i<=max; i++)
    {
        if(prime[i] == 0)
        {
            for(j=2; i*j<=max; j++)
                prime[i*j]++;
        }
    }

    for(i=0; i<T; i++)
    {
        count = 0;
        for(j=2; j<=input[i]/2; j++)
        {
            if(prime[j] != 0)
                continue;
            if(prime[input[i]-j] == 0)
            {
                output[i][count] = j;
                count++;
            }
        }
        printf("%d has %d representation(s)\n", input[i], count);
        for(j=0; j<count; j++)
            printf("%d+%d\n", output[i][j], input[i]-output[i][j]);
        printf("\n");     
    }
}