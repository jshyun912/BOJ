#include <stdio.h>

long long t[36] = { 1,1,0 };

long long fire(int n)
{
	int i;

	if (t[n] == 0)
		for (i = 0; i < n; i++)
			t[n] += fire(i) * fire(n - i - 1);

	return t[n];
}

int main()
{
	int n;

	scanf("%d", &n);
	printf("%lld", fire(n));
}