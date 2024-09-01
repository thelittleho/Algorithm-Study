#include <stdio.h>
//현재 시각 : 시 A (0 ≤ A ≤ 23), 분 B (0 ≤ B ≤ 59), 초 C (0 ≤ C ≤ 59)
//요리하는 데 필요한 시간 초 D (0 ≤ D ≤ 500,000)
//오븐구이가 끝나는 시각을 계산하는 프로그램

int main()
{
    int A,B,C,D;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);

    C += D%60;
    B += D/60;

    if (C>=60)
    {
        B+=C/60;
        C%=60;
    }

    if (B>=60)
    {
        A+=B/60;
        B%=60;
    }

    if (A>=24)
    {
        A%=24;
    }

    printf("%d %d %d", A, B, C);
    return 0;
}