#include <stdio.h>
//바구니 총 N개, 공 넣는 횟수 M번
//공 넣을 때, 공을 넣을 바구니 범위 정하고
//정한 바구니에 모두 같은 번호가 적혀있는 공 넣음 (?)
//바구니에 이미 공이 있는 경우 들어있는 공 빼고 새로 공 넣음 (..?)

//공 어떻게 넣을지가 주어졌을 때
//M번 공을 넣은 후 각 바구니에 어떤 공 들어있는지 구하는 프로그램
int main()
{
    int N, M;
    int i,j,k; //i:시작 바구니, j:끝 바구니, k:공 번호
    scanf("%d %d", &N, &M);
    int ary[101] = {0};

    for (int x=0; x<M; x++)
    {
        scanf("%d %d %d", &i, &j, &k);

        for (int y=i; y<=j; y++)
        {
            ary[y-1] = k;
        }
    }

    for (int x=0; x<N; x++)
    {
        printf("%d ", ary[x]);
    }

    return 0;
}