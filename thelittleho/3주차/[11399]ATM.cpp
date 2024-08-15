#include <iostream>
#include <algorithm>
using namespace std;



int main(void)
{
    int N, min_sum = 0;
    cin >> N;
    int P[N] = { 0 };
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    sort(P, P + N);

    min_sum += P[0];
    for (int i = 1; i < N; i++)
    {
        P[i] += P[i - 1];
        min_sum += P[i];
    }

    cout << min_sum;

    
}