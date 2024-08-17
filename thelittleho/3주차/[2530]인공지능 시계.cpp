#include <iostream>
using namespace std;

int main(void)
{
    int A, B, C;
    int D;
    int sum;

    cin >> A >> B >> C;
    cin >> D;

    // sec
    C += D;
    // min
    B += C / 60;
    C %= 60;
    A += B / 60;
    B %= 60;
    A %= 24;

    cout << A << " " << B << " " << C << "\n";
    


    
}