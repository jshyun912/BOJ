#include <stdio.h>
#include <stdbool.h>

int abs(char a)
{
	if (a < 0)
		return a * -1;
	return a;
}

int main(void)
{	
	bool isVisited[6][6] = { 0 };
	char kan[36][3];
	int i, dif_h, dif_r;

	fgets(kan[0], 3, stdin);
	getchar();
	isVisited[kan[0][0] - 65][kan[0][1] - 49] = 1;

	for (i = 1; i < 36; i++)
	{
		fgets(kan[i], 3, stdin);
		getchar();

		dif_h = abs(kan[i - 1][0] - kan[i][0]);
		dif_r = abs(kan[i - 1][1] - kan[i][1]);

		if ((dif_h == 1 && dif_r == 2) || (dif_h ==2 && dif_r == 1))
			if (isVisited[kan[i][0] - 65][kan[i][1] - 49] == 0)
			{
				isVisited[kan[i][0] - 65][kan[i][1] - 49] = 1;
				continue;
			}
		
		break;
	}

	if (i == 36)
	{
		dif_h = abs(kan[35][0] - kan[0][0]);
		dif_r = abs(kan[35][1] - kan[0][1]);

		if ((dif_h == 1 && dif_r == 2) || (dif_h == 2 && dif_r == 1))
		{
			printf("Valid");
			return 0;
		}
	}

	printf("Invalid");
}