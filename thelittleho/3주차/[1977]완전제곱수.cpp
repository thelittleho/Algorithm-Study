#include <iostream>
using namespace std;

int main(void)
{
    int M, N;
    int sum, min, num = 0;
    cin >> M;
    cin >> N;

    while (num*num <= N)
    {
        if (num*num >= M)
        {
            sum += num*num;
            // min == 0일 때 처음으로 num*num을 만나면 min에 num*num을 대입
            if (min == 0)
            {
                min = num*num;
            }
        }
        num++;
    }

    if (sum == 0)  
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << sum << '\n';
        cout << min << '\n';
    }

}