#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    string str;
    cin >> str;

    sort(str.begin(), str.end(), greater<char>());

    cout << str << '\n';
    
}