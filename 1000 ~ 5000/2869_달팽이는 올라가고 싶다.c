int main()
{
	int A, B, V;
	int i;

	scanf("%d %d %d", &A, &B, &V);

	V -= A;

	if (V % (A - B) != 0)
		printf("%d", V / (A - B) + 2);

	else
		printf("%d", V / (A - B) + 1);
}