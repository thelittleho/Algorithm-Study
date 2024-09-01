#include <stdio.h>
//기말점수 조작할 거임
//시험 본 과목 개수 N
//자기 점수 중 최댓값이 M
//모든 점수를 점수/M*100으로 change

//사기 친 방법으로 계산했을 때 새로 평균 구하는 프로그램

int main()
{
    int N,M;
    float sum=0;
    int max=0;
    int ary[1000] = {0};

    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &ary[i]);

        if(ary[i]>max)
        {
            max=ary[i];
        }
    }

    for (int i=0; i<N; i++)
    {
        sum += ((float)ary[i]/max)*100;
    }

    printf("%.2f", ((float)sum/N));
    return 0;
}