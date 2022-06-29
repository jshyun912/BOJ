#include <stdio.h>
#include <stdlib.h>

main()
{
    int N;
    int i, j;
    int* prime;

    scanf("%d", &N);

    if (N == 1)
        return 0;

    prime = (int*)calloc(N+1, sizeof(int));

    for (i = 2; i * i < N; i++)
    {
        if (prime[i] == 0)
        {
            for (j = 2; i * j<N; j++)
                prime[i * j]++;
        }
    }

    i = 2;

    while (N > 1)
    {
        if (prime[i] != 0)
        {
            i++;
            continue;
        }

        while (N % i == 0)
        {
            printf("%d\n", i);
            N /= i;
        }

        i++;
    }

    free(prime);
}