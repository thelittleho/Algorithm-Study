#include <stdio.h>

// void sort(int N, int pi[])
// {
//     for (int i=0; i<N-1; i++)
//     {
//         for (int j=i+1; j<N; j++)
//         {
//             if (pi[i]>pi[j])
//             {
//                 int temp = pi[i];
//                 pi[i]=pi[j];
//                 pi[j]=temp;
//             }
//         }
//     }
// }

int main()
{
    int N;
    int pi[1000];
    int sum=0;
    int temp;

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%d", &pi[i]);
    } 

    // sort (N, pi);

    for (int i=0; i<N-1; i++)
    {
        for (int j=i+1; j<N; j++)
        {
            if (pi[i]>pi[j])
            {
                temp = pi[i];
                pi[i]=pi[j];
                pi[j]=temp;
            }
        }
    }

    for (int i=0; i<N; i++)
    {
        sum += (pi[i]*(N-i)); 
    }

    printf("%d", sum);
    return 0;
}