#include <iostream>
#include <cmath>
using namespace std;

int number = 120;
int prime[121];

void primeNumber()
{
    for (int i = 2; i < number; i++)
    {
        prime[i] = i;
    }
    
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (prime[i] == 0)
        {
            continue;
        }
        for (int j = i*i; j <= number; j += i)
        {
            prime[j] = 0;
        }
    }

    for (int i = 2; i <= number; i++)
    {
        if (prime[i] != 0)
        {
            cout << prime[i] << "\n";
        }
        
    }
    
    
}

int main()
{
    primeNumber();
    return 0;
}