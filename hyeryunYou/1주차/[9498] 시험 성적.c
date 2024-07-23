#include <stdio.h>

int main()
{
    int G;
    scanf("%d", &G);

    if (90<=G && G<=100)
    {
        printf("A");
    }
    else if (80<=G)
    {
        printf("B");
    }
    else if (70<=G)
    {
        printf("C");
    }
    else if (60<=G)
    {
        printf("D");
    }
    else
    { 
        printf("F");
    }
    return 0;
}