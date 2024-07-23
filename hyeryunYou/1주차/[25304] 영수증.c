#include <stdio.h>
//구매한 물건의 가격과 개수로 계산한 총 금액 = 영수증에 적힌 총 금액 -> Yes
//a:각 물건 가격, b:물건 개수 

int main()
{
    int X, N, a,b, sum;
    scanf("%d\n%d", &X, &N);

    sum =0;

    for (int i=0; i<N; i++)
    {
        scanf("%d %d", &a, &b);
        sum += a*b;
    }

    if (X == sum)                     
	{
		printf("Yes");
	}
	else                              
	{
		printf("No");
	}
    return 0;
}