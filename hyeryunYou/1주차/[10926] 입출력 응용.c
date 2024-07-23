#include <stdio.h>
//준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때
//입력한 아이디에 ??! 붙인 채 출력
//아이디는 알파벳 소문자, 길이는 50자 이내

int main()
{
    char A[50];
    scanf("%s", &A);
    printf("%s??!", &A);
    return 0;
}