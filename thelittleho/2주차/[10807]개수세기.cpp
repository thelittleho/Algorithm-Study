#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, V, k[101];
    int cnt = 0;

    cin >> N;

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