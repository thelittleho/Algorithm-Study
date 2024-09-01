#include <stdio.h>

int main() 
{
    int N;
    int rope[100000];
    int temp;

    scanf("%d", &N);

    for (int i=0; i<N; i++) 
    {
        scanf("%d", &rope[i]);
    }
    
    //젤 중량 쎈거 부터 차례로 쭉 -> 내림차순
    for (int i=0; i < N-1; i++) 
    {
        for (int j=0; j<N-1-i; j++) 
        {
            if (rope[j] < rope[j+1]) 
            {
                temp=rope[j];
                rope[j]=rope[j+1];
                rope[j+1] = temp;
            }
        }
    }
    
    int mw= 0;
    
    //지금현재 중량 nw, 최대 중량 mw
    for (int i = 0; i < N; i++) 
    {
        int nw = rope[i] * (i+1);

        if (nw > mw) 
        {
            mw = nw;
        }
    }
    
    printf("%d\n", mw);
    return 0;
}
