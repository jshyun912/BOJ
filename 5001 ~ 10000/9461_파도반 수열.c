#include <stdio.h>

int main()
{
	int T, N;
	long long P[101] = { 0,1,1,1,2,2 };
	int i;

	for (i = 6; i <= 100; i++)
		P[i] = P[i - 3] + P[i - 2];

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d", &N);
		printf("%lld\n", P[N]);
	}
}