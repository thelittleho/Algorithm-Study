#include <iostream>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    double grade = 0;

    cout << fixed;
    cout.precision(1);

    switch (str[0])
    {
    case 'A':
        grade += 4.0;
        break;
    case 'B':
        grade += 3.0;
        break;
    case 'C':
        grade += 2.0;
        break;
    case 'D':
        grade += 1.0;
        break;
    }

    switch (str[1])
    {
    case '+':
        grade += 0.3;
        break;

    case '0':
        grade += 0.0;
        break;
    case '-':
        grade -= 0.3;
        break;
    }

    cout << grade;
}