#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // 배열 중 최댓값 선별 과정
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    double sum = 0;
    for (int j = 0; j < n; j++)
    {
        // 새로운 평균 계산 과정
        sum += ((double)arr[j] / max ) * 100;
    }

    // 평균 출력
    printf("%f\n", (double) sum/n);
    
    
}