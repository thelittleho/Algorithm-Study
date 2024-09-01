#include <stdio.h>
//단어 길이는 최대 1000

int main()
{
    char ary[1000];
    int N;

    scanf ("%s", ary);
    scanf ("%d", &N);

    printf ("%c", ary[N-1]);
    return 0;
}