//반복문을 사용해서 별을 찍어야한다.
//가로줄 세로줄 모두 반복문을 써야한다. 
//예를들어 n = 1일 때 별이 하나 찍혀야하고
//n = 2 일땐 별이 두개 찍혀야한다. 다음 줄로 넘어갈 때마다 하나씩 증가시켜야 한다.


#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n"); // 개행 꼭 필요
	}
	return 0;
}