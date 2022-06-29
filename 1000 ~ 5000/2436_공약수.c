#include <stdio.h>
#include <math.h>

long long gong(long long num1, long long num2)
{
	if (num2 == 0)
		return num1;

	return gong(num2, num1 % num2);
}

int main()
{
	long long GCD, LCM;
	long long temp, ans_1, ans_2 = 0;

	scanf("%lld %lld", &GCD, &LCM);

	temp = GCD * LCM;
	ans_1 = sqrt(temp);

	while (ans_2 == 0)
	{
		if (temp % ans_1 == 0)
		{
			ans_2 = temp / ans_1;
			if (GCD == gong(ans_1, ans_2))
				break;
			ans_2 = 0;
		}

		ans_1--;
	}

	printf("%lld %lld", ans_1, ans_2);
}