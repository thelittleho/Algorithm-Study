#include <stdio.h>

int main()
{
    int N; //4<=N<=100, N%4=0
    scanf("%d", &N);
    if (N%4==0)
    {
        for (int i=0; i< N/4; i++)
        {
            printf("long ");
        }
        printf("int");
    }
    return 0;
}