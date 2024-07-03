#include <iostream>
#include <stack>

using namespace std;

stack<int> st;
int N, T, cnt = 1;


int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    while (N--)
    {
        cin >> T;

        if (T == cnt)
        {
            cnt++;
        }
        else st.push(T);

        while(!st.empty()&&st.top()==cnt)
        {
			st.pop();
			cnt++;
        }
    }

    if (st.empty())
    {
        cout << "Nice";
    }
    else 
    {
        cout << "Sad";
    }
    
}