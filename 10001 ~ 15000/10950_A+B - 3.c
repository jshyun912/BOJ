#include <stdio.h>

main()
{
    int a, b, i, min = 10000000, max = -10000000;
    scanf("%d",&i);

    for (min = 0; min < i; min++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}