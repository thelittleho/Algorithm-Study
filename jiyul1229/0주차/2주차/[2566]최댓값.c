//최댓값 <그림 1>과 같이 9×9 격자판에 쓰여진 81개의 자연수 또는 0이 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
    int A[9][9]={0, };
    int max = 0, row = 1, column = 1;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &A[i][j]);
            if (max < A[i][j]){
                max = A[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }
    printf("%d\n%d %d", max, row, column);

}