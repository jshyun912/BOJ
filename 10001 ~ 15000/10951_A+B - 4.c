#include <stdio.h>

main()
{
    int a, b, i, min = 10000000, max = -10000000;

    while(scanf("%d %d", &a, &b) != -1)
    {
        printf("%d\n", a + b);
    }
}