#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    int i, j, k, m;
    int num = 1, count;

    scanf("%d", &N);

    num = (int)pow(10, (double)N-1);
    
    for(i=2*num; i<4*num; i++)
    {
        count = 0;
        for(m = 10; m <= num; m*=10)
        {
            j=i/(num/m);
            for(k=2; k<= sqrt((double)j); k++)
            {
                if(j%k == 0)
                {
                    count++;
                    break;
                }

                if(count > 0)
                    break;
            }

            if(count > 0)
                break;
        }

        if(count == 0)
            printf("%d\n", i);
    }

    for(i=5*num; i<6*num; i++)
    {
        count = 0;
        for(m = 10; m <= num; m*=10)
        {
            j=i/(num/m);
            for(k=2; k<= sqrt((double)j); k++)
            {
                if(j%k == 0)
                {
                    count++;
                    break;
                }

                if(count > 0)
                    break;
            }

            if(count > 0)
                break;
        }

        if(count == 0)
            printf("%d\n", i);
    }

    for(i=7*num; i<8*num; i++)
    {
        count = 0;
        for(m = 10; m <= num; m*=10)
        {
            j=i/(num/m);
            for(k=2; k<= sqrt((double)j); k++)
            {
                if(j%k == 0)
                {
                    count++;
                    break;
                }

                if(count > 0)
                    break;
            }

            if(count > 0)
                break;
        }

        if(count == 0)
            printf("%d\n", i);
    }

    return 0;
}