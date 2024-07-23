#include <stdio.h>
//입력
//첫째 줄에 현재 시각 A시 B분
//두 번째 줄 요리하는 데 필요한 시간 C분
//출력
//요리가 끝나는 시각 시 분

int main()
{
    int A,B,C;
    scanf("%d %d\n%d", &A, &B, &C);
    if (C<60)
    {
        if (B+C<60)
        {
            printf("%d %d", &A, &B+C);
        }
        else
        {
            prinf("%d %d", &A+1, &B+C-60);
        }
    }
    else
    {
        if ()
    }
    return 0;
}