#include <iostream>
using namespace std;

int main(void)
{
    int thing_money, yen = 0;
    int coin_types[6] = {500, 100, 50, 10, 5, 1};
    
    cin >> thing_money;
    thing_money = 1000 - thing_money;

    for (int i = 0; i < 6; i++)
    {
        yen += thing_money / coin_types[i];
        thing_money %= coin_types[i];
    }

    cout << yen;
    
}