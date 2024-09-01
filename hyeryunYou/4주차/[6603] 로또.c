#include <stdio.h>
#include <stdlib.h>
//완전탐색 : 가능한 경우의 수를 일일이 나열하면서 답을 찾는 방법
//  - 단순 Brute-Force
//  - 비트마스크(Bitmask)
//  - 재귀 함수
//  - 순열 (Permutation)
//  - BFS / DFS

//첫 번째 수는 k (6 < k < 13)
//다음 k개 수는 집합 S에 포함되는 수
//S의 원소는 오름차순으로 주워짐
//입력의 마지막 줄에는 0이 하나 주어진다. 

//각 테스트 케이스 사이에는 빈 줄을 하나 출력한다.
#define MAX 13

int main()
{
    int aryS[MAX];

    while (1)
    {
        int k;
        scanf("%d", &k);
        if (k=0)
        {
            break;
        }

        for (int i=0; i<k; i++)
        {
            scanf("%d", &aryS[i]);
        }
    }

//뽑는 경우의 수의 범위를 for 6개로 표현
//7개 -> 뽑힌 수를 제외한 6개 -> ... -> 1개까지 => 총 6개 for문

    return 0;
}