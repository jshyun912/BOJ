#include <stdio.h>

main()
{
    int a, i, j;
    scanf("%d", &a);

    for (i = 1; i <= 8; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    printf("%d * %d = %d", a, i, a * i);
}