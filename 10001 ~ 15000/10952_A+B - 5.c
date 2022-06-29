#include <stdio.h>

main()
{
    int a, b, i, min = 10000000, max = -10000000;

    while(1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            return 0;
        printf("%d\n", a + b);
    }
}