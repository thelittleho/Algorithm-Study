#include <stdio.h>
#include <stdlib.h>
#define MAX 10000


int main() 
{
    int N, K;
    int ary[MAX]; //센서위치
    int D=0;

    scanf("%d %d", &N, &K);

    for (int i = 0; i<N; i++) 
    {
        scanf("%d", &ary[i]);
    }

//1. 센서위치 정렬
    for (int i=0; i<N-1; i++) 
    {
        for (int j=0; j<N-1-i; j++) 
        {
            if (ary[j]>ary[j+1]) 
            {
                int temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }

//dist = distance의 줄임말
    int dist[MAX-1];

    for (int i=0; i<N-1; i++) 
    {
        dist[i] = ary[i+1]-ary[i];
    }

//2. 거리배열 정렬 -> 작은 거리부터 큰 거리
    for (int i=0; i<N-2; i++) 
    {
        for (int j=0; j<N-2-i; j++) 
        {
            if (dist[j] > dist[j+1])
            {
                int temp= dist[j];
                dist[j]=dist[j+1];
                dist[j+1]=temp;
            }
        }
    }

//D=distance
    for (int i = 0; i<N-K; i++) 
    {
        D += dist[i];
    }

    printf("%d\n", D);
    return 0;
}