#include <iostream>
#define swap(a, b) {int (t) = (a); (a) = (b); (b) = (t);}

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, b_in1, b_in2;
    int basket[100] = {0};

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        basket[i] = i + 1;
    }
    

    for (int i = 0; i < M; i++)
    {
        cin >> b_in1 >> b_in2;
        swap(basket[b_in1-1], basket[b_in2-1]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << basket[i] << ' ';
    }
}