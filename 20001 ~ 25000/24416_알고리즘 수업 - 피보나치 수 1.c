#include <stdio.h>

int main()
{
	int n;
	int ans = 2, a = 2, b = 3, temp, i;
	scanf("%d", &n);

	for (i = 5; i <= n; i++)
	{
		ans++;
		temp = a + b;
		a = b;
		b = temp;
	}

	printf("%d %d", b, ans);
}