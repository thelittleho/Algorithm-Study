#include <iostream>
using namespace std;

int main(void)
{
    int day, carNum[5];
    int count = 0;

    cin >> day;
    for (int i = 0; i < 5; i++)
    {
        cin >> carNum[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (day == carNum[i])
        {
            count++;
        }
    }

    cout << count;
}