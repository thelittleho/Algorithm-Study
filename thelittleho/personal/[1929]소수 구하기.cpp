#include <iostream>
using namespace std;


int main(void)
{
    int m, n;
    cin >> m >> n;

    bool prime[1000001] = {false, };
    prime[0] = prime[1] = true;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            continue;
        }
        else
        {
            for (int j = 2; j * i <= n; j++)
            {
                prime[j * i] = true;
            }
            
        }
        
    }

    for (int i = m; i < n; i++)
    {
        if (!prime[i])
        {
            cout << i << "\n";
        }
        
    }
    
    
}