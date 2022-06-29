#include <stdio.h>

int main(void)
{
    int M, N;
    
    char board[50][51];
    char check[8][9] = {"WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW"};
    
    int min = 3000;
    int current;
    
    int i,j,k,l;
    
    scanf("%d %d", &M, &N);
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
            scanf(" %c", &board[i][j]);
    }


    for(i=0; i<=M-8; i++)
    {
        for(j=0; j<=N-8; j++)
        {
            current = 0;
            for(k=0; k<8; k++)
            {
                for(l=0; l<8; l++)
                {
                    if(board[i+k][j+l] != check[k][l])
                        current++;
                }
            }

            if(current>32) current = 64-current;
            if(current<min) min = current;
        }
    }
    
    printf("%d", min);
}