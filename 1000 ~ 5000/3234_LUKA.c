#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
}coord;

int main()
{
	coord luka, TM = { 0,0 };
	int time, ans = 0, i;
	char route[100001];

	scanf("%d %d", &luka.x, &luka.y);
	scanf("%d", &time);
	scanf("%s", route);

	for (i = 0; i <= time; i++)
	{
		if (abs(luka.x - TM.x) <= 1 && abs(luka.y - TM.y) <= 1)
		{
			printf("%d\n", i);
			ans++;
		}

		if (route[i] == 'I')
			TM.x++;
		else if (route[i] == 'S')
			TM.y++;
		else if (route[i] == 'Z')
			TM.x--;
		else
			TM.y--;
	}

	if (ans == 0)
		printf("-1");
}