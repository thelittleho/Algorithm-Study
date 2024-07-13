#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int T, vote_n;
    cin >> T;

    while (T--)
    {
        cin >> vote_n;

        for (int i = 0; i < (vote_n / 5); i++)
            cout << "++++ ";
        for (int i = 0; i < (vote_n % 5); i++)
            cout << "|";
    
        cout << "\n";
    }
}
