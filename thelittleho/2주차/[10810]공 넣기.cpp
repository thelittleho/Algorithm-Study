#include <iostream>
using namespace std;

int main(void)
{
    int N, M = 0;
    int i, j, k;

    cin >> N >> M;
    int basket[N] = {0};

    for (int x = 0; x < M; x++)
    {
        cin >> i >> j >> k;
        for (int y = i; y <= j; y++)
        {
            basket[y-1] = k;
        }
        
    }

    for (int z = 0; z < N; z++)
    {
        cout << basket[z] << " ";
    }
    
    
}