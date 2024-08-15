#include <iostream>
using namespace std;

int main(void)
{
    int N, K, number_of_coins = 0;
    cin >> N >> K;

    // 동전 가치 입력
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    // 큰 동전부터 사용
    for (int i = N-1; i >= 0; i--)
    {
        number_of_coins += K / A[i];
        K %= A[i];
    }

    cout << number_of_coins;
    
}