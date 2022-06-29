#include <stdio.h>

int main(void)
{
	int N, M, B;
	int height[500][500];
	int time, block;
	int ans_height = -1, ans_time = 210000000;
	int min = 300, max = -1;
	int i,j,k;

	scanf("%d %d %d", &N, &M, &B);
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			scanf("%d", &height[i][j]);
			if(height[i][j] < min)
				min = height[i][j];
			if(height[i][j] > max)
				max = height[i][j];
		}
	}

	for(i=min; i<=max; i++)
	{
		time = 0;
		block = B;
		for(j=0; j<N; j++)
		{
			for(k=0; k<M; k++)
			{
				if(height[j][k] - i >= 0)
					time = time + (height[j][k] - i)*2;
				else
					time = time + i - height[j][k];					
				block = block + height[j][k] - i;
			}
		}

		if(block >= 0)
		{
			if(time < ans_time)
			{
				ans_time = time;
				ans_height = i;
			}

			else if(time == ans_time)
			{
				if(ans_height < i)
					ans_height = i;
			}
		}
	}

	printf("%d %d",ans_time, ans_height);
}