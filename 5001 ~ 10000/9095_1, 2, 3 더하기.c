#include <stdio.h>

int main()
{
	int T, n;
	int seq[12] = { 1,1,2,0 };
	int a = 1, b = 2, temp, i;

	for (i = 3; i <= 11; i++)
		seq[i] = seq[i - 1] + seq[i - 2] + seq[i - 3];

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &n);
		printf("%d\n", seq[n]);
	}
}