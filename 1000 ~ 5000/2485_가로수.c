#include <stdio.h>

int gong(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gong(num2, num1 % num2);
}

int main()
{
	int N, light[100000];
	int dis, count = 0;
	int i;

	scanf("%d", &N);
	scanf("%d %d %d", &light[0], &light[1], &light[2]);

	dis = gong(light[1] - light[0], light[2] - light[1]);

	for (i = 3; i < N; i++)
	{
		scanf("%d", &light[i]);
		dis = gong(dis, light[i] - light[i-1]);
	}

	for (i = 1; i < N; i++)
		while (light[i - 1] + dis != light[i])
		{
			count++;
			light[i - 1] += dis;
		}

	printf("%d", count);
}