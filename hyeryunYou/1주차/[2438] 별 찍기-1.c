#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i=0; i<N; i++) //i=line
    {
       for (int j=0; j<i; j++) //j=star
       {
        printf("*");
       }
       printf("\n");
    }
    return 0;
}