#include <stdio.h>
#include <string.h>

main()
{
    char S[102];
    int first[26];
    int i, j, streak, sum;

    for (i = 0; i < 26; i++)
        first[i] = 9999999;

    scanf("%s", S);

    for (i = 0; i < strlen(S); i++)
    {
        if (first[(int)S[i] - 97] > i)
            first[(int)S[i] - 97] = i;
    }

    for (i = 0; i < 26; i++)
    {
        if (first[i] > 9999)
            first[i] = -1;
        printf("%d ", first[i]);
    }
        

}