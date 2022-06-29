#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand(time(NULL));
	printf("%d", rand() % 10 + 1);
}