//9×9 격자판에 쓰여진 81개의 자연수 또는 0이 주어질 때
//이들 중 최댓값을 찾고
//그 최댓값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램
//i:열, j:행

#include <stdio.h>

int main()
{
    int ary[9][9] = {0};
    int max=0;
    int x,y;

    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }

    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (ary[i][j]>=max)
            {
                max=ary[i][j];
                x=i+1;
                y=j+1;
            }
        }
    }

    printf("%d\n%d %d", max, x, y);
    return 0;
}