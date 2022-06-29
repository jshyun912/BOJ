#include <stdio.h>
#include <stdlib.h>

main()
{
    int T, R;
    int i, j, k;
    char S[22];

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %s", &R, S);
        for (j = 0; j < strlen(S); j++)
        {
            for (k = 0; k < R; k++)
                printf("%c", S[j]);
        }
        printf("\n");
    }
}