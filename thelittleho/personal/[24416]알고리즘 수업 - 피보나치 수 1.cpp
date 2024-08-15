#include <iostream>
using namespace std;

int loop, dp;

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        loop++;
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
    
}

int fibonacci(int n)
{
    int f[n];
    f[0] = 0; f[1] = 1;

    for (int i = 2; i < n; i++)
    {
        dp++;
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n-1];
    
}

int main(void)
{
    int n;
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << loop << " " << dp;
}