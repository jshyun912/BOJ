#include <stdio.h>

int main(void)
{
	int N;
	int num[10]={6,6,6,0};
	int i = 0, j = 0;;

	scanf("%d", &N);

	while(i<N)
	{
		for(j=0; j<8; j++)
		{
			if(num[j]==6)
				if(num[j+1]==6)
					if(num[j+2]==6)
					{
						i++;
						break;
					}
		}

		num[0]++;
		for(j=0; j<9; j++)
		{
			if(num[j] == 10)
			{
				num[j] = 0;
				num[j+1]++;
			}
		}
	}
	printf("%d", num[9]*1000000000 + num[8]*100000000 + num[7]*10000000 + num[6]*1000000 + num[5]*100000 + num[4]*10000 + num[3]*1000 + num[2]*100 + num[1]*10 + num[0] -1);
}