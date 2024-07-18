#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int natural_num[5] = {0};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> natural_num[i];
    }

    sort(natural_num, natural_num + 5);

    for (int i = 0; i < 5; i++)
    {
        sum += natural_num[i];
    }

    cout << sum / 5 << '\n';
    cout << natural_num[2] << '\n';
    


    
}