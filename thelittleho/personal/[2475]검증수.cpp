#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
    int unique_number = 0;
    int number_of_verification = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> unique_number;
        number_of_verification += pow(unique_number, 2);
    }

    cout << number_of_verification % 10;
    
}