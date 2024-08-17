#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    int alphabet[26], len, idx;

    for (int  i = 0; i < 26; i++)
    {
        alphabet[i] = -1;
    }

    scanf("%s", s);

    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        // 알파벳 - 'a'를 하면 알파벳의 인덱스를 구할 수 있다.
        idx = s[i] - 'a';
        if (alphabet[idx] == -1)
        {
            alphabet[idx] = i;
        }

        else
        {
            continue;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alphabet[i]);
    }

}