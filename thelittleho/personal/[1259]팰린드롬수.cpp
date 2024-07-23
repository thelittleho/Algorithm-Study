#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string s;

    while (s != "0")
    {
        cin >> s;
        string buf = s;
        reverse(s.begin(), s.end());
        if (s == "0")
        {
            break;
        }
        if(s == buf)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
        
    }
    


}