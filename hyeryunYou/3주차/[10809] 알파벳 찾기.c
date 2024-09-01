#include <stdio.h>
#include <string.h>
//단어 S에 포함되어 있는 경우에는 처음 등장하는 위치를
//포함되어 있지 않은 경우에는 -1을 출력하는 프로그램
//단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.

//첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
//각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 
//공백으로 구분해서 출력

int main()
{
    char ary[100];
    int alpha[26];
    int len, index;

    scanf("%s", ary);

    len = strlen(ary);

    for (int i=0; i<26; i++)
    {
        alpha[i] = -1;
    }

    for (int i=0; i<len; i++)
    {
        index= ary[i]-'a';

        if (alpha[index]==-1)
        {
            alpha[index]=i;
        }

        else
        {
            continue;
        }
    }

    for (int i=0; i<26; i++)
    {
        printf("%d ", alpha[i]);
    }

    return 0;
}