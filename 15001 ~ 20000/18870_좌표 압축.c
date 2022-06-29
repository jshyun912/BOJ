#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int num;
	int coord;
	int order;
} arc;

int up_1(const void* a, const void* b)
{
	arc num1 = *(arc*)a;
	arc num2 = *(arc*)b;

	if (num1.num < num2.num)
		return -1;

	if (num1.num > num2.num)
		return 1;

	return 0;
}

int up_2(const void* a, const void* b)
{
	arc num1 = *(arc*)a;
	arc num2 = *(arc*)b;

	if (num1.order < num2.order)
		return -1;

	if (num1.order > num2.order)
		return 1;

	return 0;
}


int main()
{
	int N, i, j;
	arc X[1000000];
	scanf("%d", &N);
    
    for(i=0; i<N; i++)
	{
		scanf("%d", &X[i].num);
		X[i].order = i;
	}
       
        
    qsort(X, N, sizeof(arc), up_1);
    
	X[0].coord = 0;
    for(i=1, j=1; i<N; i++)
	{
		if(X[i].num == X[i-1].num)
			X[i].coord = X[i-1].coord;
			
		else
		{
			X[i].coord = j;
			j++;
		}
	}
	
	qsort(X, N, sizeof(arc), up_2);
	
	for(i=0; i<N; i++)
		if(X[i].coord != -1)
			printf("%d ", X[i].coord);
          
}
