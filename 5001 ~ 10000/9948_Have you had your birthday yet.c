int main(void)
{
	int date;
	char month[12];

	while (1)
	{
		scanf("%d %s", &date, month);
		if (date == 0)
			break;

		if (month[0] == 'S' || month[0] == 'O' || month[0] == 'N' || month[0] == 'D')
			printf("No\n");

		else if (date == 29 && month[0] == 'F')
			printf("Unlucky\n");

		else if (month[0] == 'J' || month[0] == 'F' || month[0] == 'M')
			printf("Yes\n");

		else if (month[1] == 'p')
			printf("Yes\n");

		else if (date == 4)
			printf("Happy birthday\n");

		else if (date > 4)
			printf("No\n");

		else
			printf("Yes\n");
	}
}