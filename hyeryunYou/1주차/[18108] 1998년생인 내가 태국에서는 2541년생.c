#include <stdio.h>
//불기연도 -> 서기 연도로 바꿔주는 프로그램
//불기연도 y, 서기연도 x
//1000<=y<=3000
//서기연도: 1988 일 때 불기연도: 2541
//서기연도=불기연도-543
int main()
{
    int y;
    scanf("%d", &y);
    printf("%d", y-543);
    return 0;
}