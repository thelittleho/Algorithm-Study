#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    stack<int> S;
    while (n--)
    {
        int c; cin >> c;

        // push
        if(c==1)
        {
            int num; cin >> num;
            S.push(num);
        }

        // pop
        else if(c==2)
        {
            if(S.empty()) 
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << S.top() << "\n";
                S.pop();
            }
        }

        // size
        else if(c==3)
        {
            cout << S.size() << "\n";
        }

        //empty
        else if(c==4)
        {
            if(S.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (c==5)
        {
            if(S.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << S.top() << "\n";
            }
        }
    }
    
}