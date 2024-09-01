#include <stdio.h>
//9개의 서로 다른 자연수가 주어질 때
//그 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램

int main()
{
    int max=0; int index=0;
    int ary[100];
    for (int i=0; i<9; i++)
    {
        scanf("%d\n", &ary[i]);
    }

    for (int i=0; i<9; i++)
    {
        if (ary[i] > max)
        {
            max=ary[i];
            index = i+1;
        }
    }
    printf("%d\n%d", max, index);
    return 0;
}