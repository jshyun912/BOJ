int main(void)
{
	char a[1000][15] = { "Lorem", "ipsum", "dolor", "sit", "amet,", "consectetur", "adipiscing", "elit.", "Donec", "quis", "lectus", "sit", "amet", "ante", "suscipit", "tempor.", "Aenean", "dapibus", "finibus", "tortor", "vitae", "facilisis.", "Nulla", "facilisi.", "Donec", "suscipit", "ante", "a", "sapien", "gravida", "eleifend.", "Curabitur", "in", "lectus", "ut", "enim", "semper", "venenatis.", "Aenean", "elit", "nibh,", "hendrerit", "nec", "nunc", "in,", "dictum", "cursus", "dolor.", "Aenean", "eget", "lectus", "risus.", "Cras", "sollicitudin", "quam", "vitae", "augue", "mollis", "bibendum.", "Aliquam", "euismod", "vulputate", "dolor", "at", "tristique.", "Praesent", "elementum", "pretium", "velit", "non", "interdum.", "Nunc", "posuere", "faucibus", "magna", "id", "pretium.", "Maecenas", "congue,", "velit", "eget", "semper", "porttitor,", "tellus", "tortor", "porttitor", "dui,", "tristique", "lobortis", "quam", "sem", "ac", "odio."};

	int b, c, d;

	scanf("%d %d", &b, &c);
	
	for (d = b; d <= c; d++)
		printf("%s ", a[d-1]);
}