int main(void)
{
	int x, n, d, m, g;
	scanf("%d %d %d %d %d", &x, &n, &d, &m, &g);
	x = ((x * 2) - 1) * n;
	d += (x - 1);
	
	if (m % 2 == 1 && m <= 7 && d > 31)
	{
		m++;
		d -= 31;
	}

	else if (m == 2)
	{
		if (g % 4 == 0 && g % 100 == 0 && g % 400 == 0)
		{
			if (d > 29)
			{
				m++;
				d -= 29;
			}
		}

		else if (g % 4 == 0 && g % 100 == 0)
		{
			if (d > 28)
			{
				m++;
				d -= 28;
			}
		}

		else if (g % 4 == 0)
		{
			if (d > 29)
			{
				m++;
				d -= 29;
			}
		}

		else if (d > 28)
		{
			m++;
			d -= 28;
		}
	}

	else if (m % 2 == 0 && m <= 7 && d > 30)
	{
		m++;
		d -= 30;
	}

	else if (m % 2 == 1 && m > 7 && d > 30)
	{
		m++;
		d -= 30;
	}

	else if (m % 2 == 0 && m > 7 && d > 31)
	{
		m++;
		d -= 31;
	}

	if (m == 13)
	{
		m = 1;
		g++;
	}

	printf("%d %d %d", d, m, g);
}