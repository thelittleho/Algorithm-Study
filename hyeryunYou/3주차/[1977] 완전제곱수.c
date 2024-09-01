#include <stdio.h>
//첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력
//단, M이상 N이하의 자연수 중 완전제곱수가 없을 경우 첫째 줄에 -1을 출력

int main()
{
    int M, N;
    int min =10000; 
    int sum =0;
    int ary[10000];
    scanf("%d\n%d", &M, &N);

    for (int i=0; i<=N; i++)
    {
        ary[i]=i*i;

        if (M<=ary[i] && ary[i]<=N)
        {
            sum+=ary[i];

            if (ary[i]<min)
            {
                min = ary[i];
            }
        }
    }

    if (sum == 0)
    {
        printf("-1");
    }

    else
    {
        printf("%d\n%d", sum, min);
    }
    return 0;
}