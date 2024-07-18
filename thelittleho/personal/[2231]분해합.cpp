#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        int tmp = i;
        int sum = i;

        while (tmp)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == N)
        {
            cout << i << endl;
            return 0;
        }
        
    }
    cout << 0 << '\n';
}