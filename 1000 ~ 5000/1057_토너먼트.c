#include <stdio.h>

main()
{
	int N, kim, im;
	int i;

	scanf("%d %d %d", &N, &kim, &im);

	if(kim > im)
	{
		i = kim;
		kim = im;
		im = i;
	}

	for(i=1; ;i++)
	{
		if(im - kim == 1)
			if(im%2 == 0)
				break;
		kim = (int)((float)kim/2+0.5);
		im  = (int)((float)im /2+0.5);
	}

	printf("%d", i);

}