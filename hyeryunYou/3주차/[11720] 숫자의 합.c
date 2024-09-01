#include <stdio.h>
#include <string.h>
//첫째 줄에 숫자의 개수 N 입력
//둘째 줄에 숫자 N(첫째 줄에서 입력한 숫자 개수)개 입력

int main()
{
    int N, len;
    int sum=0;
    scanf("%d", &N);

    char ary[100];
    scanf("%s", ary);

    len = strlen(ary); //strlen함수에 문자열 포인터를 넣으면 문자열의 길이가 반환됨

    for (int i=0; i<len; i++)
    {
        sum += ary[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}