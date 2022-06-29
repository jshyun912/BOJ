#include <stdio.h>

main()
{
int N;;
int count = 0;

scanf("%d", &N);

if (N < 100)
{
printf("%d", N);
return 0;
}

if (N == 1000) N = 999;
while(N > 99)
{
if(N/100 - (N%100)/10 == (N%100)/10 - N%10)
count++;

N--;
}

printf("%d", count+99);
}