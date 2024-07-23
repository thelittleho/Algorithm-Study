#include <stdio.h>
//앞에 빈공간 출력하고
//뒤에 별 출력
int main()
{
    int N;
    scanf("%d", &N);

    for (int i=1; i<=N; i++) //i=line
    {
       for (int j=N-i; j>0; j--) //j=blank
       {
        printf(" ");
       }
       for (int k=1; k<=i; k++) //k=star
       {
        printf("*");
       }
       printf("\n");
    }
    return 0;
}