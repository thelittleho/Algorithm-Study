#include <iostream>

using namespace std;

int main(void)
{
    // 정수의 개수 { N } (입력을 받을 정수의 개수)
    // 배열 내에서 찾으려는 정수 { V }
    // N을 담을 배열 { k[101] }
    int N, V, k[101];
    int cnt = 0;

    cin >> N;

    // N개의 정수 입력
    for (int i = 0; i < N; i++)
    {
        cin >> k[i];
    }

    cin >> V;

    for (int i = 0; i < N; i++)
    {
        if (k[i] == V)
        {
            cnt++;
        }
    }

    cout << cnt;
}