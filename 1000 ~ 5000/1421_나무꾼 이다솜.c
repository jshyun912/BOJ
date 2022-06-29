#include <stdio.h>

int main(void)
{
    int N, C, W, input[50];
    int cut, wood;
    int i, j;
    long long worth, max_worth = 0;
    int max = 0, s_max = 0;

    scanf("%d %d %d", &N, &C, &W);

    for(i=0; i<N; i++)
    {
        scanf("%d", &input[i]);

        if(input[i] >= max)
            max = input[i];
    }
    
    for(i=1; i<=max; i++)
    {
        worth = 0;

        for(j=0; j<N; j++)
        {
            if(input[j]/i == 0)
                continue;
                
            wood = 0;
            cut = 0;

            wood = input[j] - input[j]%i;
            cut = input[j]/i - 1;

            if(input[j]%i != 0)
                cut++;

            if(wood * W > cut * C)
                worth =  worth + wood * W - cut * C;
        }

        if(worth > max_worth)
            max_worth = worth;
    }

    printf("%lld", max_worth);
}