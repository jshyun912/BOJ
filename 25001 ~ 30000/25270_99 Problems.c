int main()
{
	int price, temp_1, temp_2;

	scanf("%d", &price);
	
	if (price < 100)
		price = 101;

	temp_1 = ((price / 100)) * 100 + 99;
	temp_2 = ((price / 100) - 1) * 100 + 99;

	if (temp_1 - price <= price - temp_2)
		printf("%d", temp_1);
	else
		printf("%d", temp_2);
}