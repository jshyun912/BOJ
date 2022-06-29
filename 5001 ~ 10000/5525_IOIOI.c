#include <stdio.h>
#include <stdlib.h>

int main()
{
	char P[3] = "IO", S[1000001];
	int N, M, i, j, ans = 0;

	scanf("%d %d %s", &N, &M, S);
	N = N * 2 + 1;

	for (i = 0; i <= M - N; i++)
	{
		if (S[i] == 'I')
		{
			j = i;
			while (S[j] == P[(j - i) % 2])
				j++;

			if (j - i >= N)
				ans += (j - i - N) / 2 + 1;

			i = j - 1;
		}
	}

	printf("%d", ans);
}