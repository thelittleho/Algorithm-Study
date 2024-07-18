#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int *number = new int[N];

    for (int i = 0; i < N; i++)
        cin >> number[i];

    // O(NlogN)의 정렬 알고리즘을 사용하여 정렬해야한다.
    sort(number, number + N);

    for (int i = 0; i < N; i++)
        cout << number[i] << '\n';
    
    delete[] number;
    return 0;
    
}