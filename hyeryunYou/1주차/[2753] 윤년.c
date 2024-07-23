#include <stdio.h>
//윤년이면 1, 아니면 0
//윤년: 4의배수&100의 배수x , 400의 배수
int main()
{
    int year;
    scanf("%d", &year);
    if (year%4==0 && year%100 !=0)
    {
        printf("1");
    }
    else if (year%400==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}