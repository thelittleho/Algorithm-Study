#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;

}

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b); 
}

int main(void)
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << GCD(num1, num2) << '\n';
    cout << LCM(num1, num2) << '\n';
}