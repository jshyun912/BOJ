#include <stdio.h>
#include <math.h>

int main()
{
	int N, M, list[10] = { 0 };
	int i, j, min, chan;

	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++)
	{
		scanf("%d", &j);
		list[j]++;
	}

	min = abs(N - 100);

	if (list[0] == 0)
		if (N + 1 < min)
			min = N + 1;

	for (i = 1; i < 1000000; i++)
	{
		chan = i;
		while (chan)
		{
			if (list[chan % 10] == 1)
				break;
			chan /= 10;
		}

		if (chan != 0)
			continue;

		chan = log10(i) + 1 + abs(N - i);

		if (chan < min)
			min = chan;
	}

	printf("%d", min);
}