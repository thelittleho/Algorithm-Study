#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    deque<int> DQ;
    int cmd, x, n;

    cin >> n;

    while (n--)
    {
        cin >> cmd;

        // push
        if (cmd == 1)
        {
            cin >> x;
            DQ.push_front(x);
        }

        // back
        else if (cmd == 2)
        {
            cin >> x;
            DQ.push_back(x);
        }

        // pop_front
        else if (cmd == 3)
        {
            if (!DQ.empty())
            {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
            else
            {
                cout << -1 << '\n';
            }
        }

        // pop_back
        else if (cmd == 4)
        {
            if (!DQ.empty())
            {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
            else
            {
                cout << -1 << '\n';
            }
        }

        // size
        else if (cmd == 5)
        {
            cout << DQ.size() << '\n';
        }

        // empty
        else if (cmd == 6)
        {
            if (DQ.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }

        // front
        else if (cmd == 7)
        {
            if (!DQ.empty())
            {
                cout << DQ.front() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }

        // back
        else if (cmd == 8)
        {
            if (!DQ.empty())
            {
                cout << DQ.back() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
}