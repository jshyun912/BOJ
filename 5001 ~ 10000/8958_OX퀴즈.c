#include <stdio.h>
#include <string.h>

main()
{
    int T;
    char score[82];
    int i, j, streak, sum;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%s", score);
        sum = 0;
        streak = 0;

        for (j = 0; j < strlen(score); j++)
        {
            if (score[j] == 'O')
            {
                streak++;
                sum += streak;
            }

            else
                streak = 0;
        }

        printf("%d\n", sum);
    }
}