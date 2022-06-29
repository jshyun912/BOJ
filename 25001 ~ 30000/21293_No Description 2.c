int main()
{
	int a, b;

	for (a = 0; a < 24; a++)
		scanf("%d", &b);

	scanf("%d %d", &a, &b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d", a + b + 1);
}