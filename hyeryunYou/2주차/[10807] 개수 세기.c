#include <stdio.h>
//총 N개의 정수 주어짐
//정수 v가 몇개인지를 구하는 프로그램
int main()
{
    int N, v;
    int ary[100];
    int count =0;

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%d ", &ary[i]);
    }

    scanf("%d", &v);

    for (int i=0; i<N; i++)
    {
        if (ary[i]==v)
        {
            count ++;
        }
    }

    printf("%d", count);
    return 0;
}