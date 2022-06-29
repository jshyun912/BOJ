main()
{
	int N, M, input[10001][2];
	int ban[201][201] = {0}, ice[3] = {0};
	int count = 0;
	int i;

	scanf("%d %d", &N, &M);
	for(i=1; i<M+1; i++)
	{
		scanf("%d %d", &input[i][0], &input[i][1]);
		ban[input[i][0]][input[i][1]]++;
		ban[input[i][1]][input[i][0]]++;
	}


	for(ice[0]=1; ice[0]<N+1; ice[0]++)
	{
		for(ice[1]=1; ice[1]<N+1; ice[1]++)
		{
			if(ice[1] == ice[0] || ban[ice[1]][ice[0]] != 0) continue;

			for(ice[2]=1; ice[2]<N+1; ice[2]++)
			{
				if(ice[2] == ice[1] || ice[2] == ice[0]) continue;
				if(ban[ice[2]][ice[0]] != 0 || ban[ice[2]][ice[1]] != 0) continue;
                
                count++;
			}

		}

	}

	printf("%d", count/6);

}