#include <stdio.h>
//점의 좌표를 입력받아 
//그 점이 어느 사분면에 속하는지 알아내는 프로그램

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    if (x>0)
    {
        if (y>0)
        {
            printf("1");
        }
        else if (y<0)
        {
            printf("4");
        }
    }
    else if (x<0)
    {
        if (y>0)
        {
            printf("2");
        }
        else if (y<0)
        {
            printf("3");
        }
    }
    return 0;
}