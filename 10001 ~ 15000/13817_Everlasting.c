#pragma warning(disable:4996)
#include <stdio.h>

main()
{
    int a[100000], b[100000], input;
    int i, j;
    int max_a, rest_a, max_b, rest_b;
    int prime[1000001] = { 0 };

    scanf("%d %d", &a[0], &b[0]);

    for (input = 1; a[input-1] != 0; input++)
        scanf("%d %d", &a[input], &b[input]);

    for (i = 2; i * i <= 1000000; i++)
    {
        if (prime[i] == 0)
        {
            for (j = 2; i * j<=1000000; j++)
                prime[i * j]++;
        }
    }

    for (i = 0; i < input-1; i++)
    {
        rest_a = 0, rest_b = 0;
        max_a = 0, max_b = 0;

        for (j = 2; j <= a[i]; j++)
        {
            if (prime[j] != 0)
                continue;

            if (a[i] % j == 0)
            {
                if (j > max_a)
                {
                    rest_a += max_a;
                    max_a = j;
                }

                else
                    rest_a += j;

                while (a[i] % j == 0)
                    a[i] /= j;
            }

        }

        for (j = 2; j <= b[i]; j++)
        {
            if (prime[j] != 0)
                continue;

            if (b[i] % j == 0)
            {
                if (j > max_b)
                {
                    rest_b += max_b;
                    max_b = j;
                }

                else
                    rest_b += j;

                while (b[i] % j == 0)
                    b[i] /= j;
            }
        }

        if (max_a - rest_a > max_b - rest_b)
            printf("a");
        else
            printf("b");
        if (i != input - 2)
            printf("\n");
    }
}