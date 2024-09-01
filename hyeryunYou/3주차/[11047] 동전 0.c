#include <stdio.h>

int main()
{
    int N,K;
    int n_of_c = 0;
    int ary[10] ={0};

    scanf("%d %d", &N, &K);
    
    for (int i=0; i<N; i++)
    {
        scanf("%d", &ary[i]);
    }

    for (int i=N-1; i>=0; i--)
    {
        n_of_c += K/ary[i];
        K%=ary[i];
    }

    printf("%d", n_of_c);
    return 0;
}