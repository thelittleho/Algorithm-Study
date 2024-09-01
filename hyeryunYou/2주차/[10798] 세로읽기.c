#include <stdio.h>
//다섯 개의 단어
//한 줄의 단어는 글자들을 빈칸 없이 연속으로 나열해서 최대 15개의 글자들로 이루어짐
//다섯 개의 단어들의 글자 개수는 서로 다를 수 있음
//칠판에 만들어진 다섯 개의 단어를 세로로 읽으려 한다
//세로로 읽은 순서대로 글자들을 출력하는 프로그램
int main()
{
    char ary[5][15];

    for (int i=0; i<5; i++)
    {
        scanf("%s", &ary[i], sizeof(ary));
    }

    for (int i=0; i<15; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (ary[j][i] == "\0")
            {
                continue;
            }
            else
            {
                printf("%c", ary[i][j]);
            }
        }
    }
    return 0;
}