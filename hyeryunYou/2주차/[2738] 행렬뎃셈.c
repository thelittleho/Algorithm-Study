#include <stdio.h>
//N:행 개수, M: 열 개수
//N개의 줄에 행렬 A와 B를 더한 행렬 출력

int main()
{
    int ary1[100][100];
    int ary2[100][100];
    int N, M;
    int sum=0;
    scanf("%d %d", &N, &M);

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            scanf("%d", &ary1[i][j]);
        }
    }

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            scanf("%d", &ary2[i][j]);
        }
    }

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            sum = ary1[i][j] + ary2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}