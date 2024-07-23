#include <stdio.h>
//원래 설정되어 있는 알람을 45분 앞서는 시간으로 바꾸기
//상근이가 설정한 알람 시각이 주어지면
//거기서 -45분
//시간 나타낼 때 불필요한 0은 사용x

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);

    //M>=45이면 그냥 M-45
    //M<45이면 
    //H=0/H-1, 60+M-45 = M+15
    if (M>=45)
    {
        printf("%d %d",H,M-45);
    }
    else
    {
        if (H==0)
        {
            H=23;
        }
        else
        {
            H=H-1;
        }
        M=M+15;
        printf("%d %d", H, M);
    }
    return 0;
}