#include <stdio.h>
#include <stdlib.h>
#define MAX 60


typedef struct 
{
    int start;
    int end;
} Meeting;

Meeting ary[100000];

int compare(const void* a, const void* b)
{
   meeting m1 = *(meeting*)a;
   meeting m2 = *(meeting*)b;

   if (m1.end > m2.end)
   {
      return 1;
   }

   else if (m1.end == m2.end)
   {
      if (m1.start > m2.start)
      {
         return 1;
      }
      else
      {
         return -1;
      }
   }
   
   else
   {
      return 0;
   }
}
qsort(arr, N, sizeof(meeting), compare);
//39번 qsort함수 뜻:
//arr라는 배열을, N번(배열의 범위)동안, meeting이라는 객체의 크기에 맞춰서, compare 함수의 규칙에 맞게
//정렬한다.

int main()
{  
    int N;
    int m_start[MAX];
    int m_end[MAX];
    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%d %d", &ary[i].start, &ary[i].end);
    }

    int count=0;
    int temp=0; //temp=끝나는 시간

    for (int i=0; i<N; i++)
    {
        if (ary[i].start >= temp)
        {
            count ++;
            temp = ary[i].end;
        }
    }

    printf("%d", &count);
    return 0;
}