#include <iostream>
using namespace std;

// 최댓값 찾는 함수
int searchMax(int num[])
{
    int max = 0;

    for (int i = 0; i < 9; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

// 최댓값의 인덱스 찾는 함수
int searchIndex(int num[], int idx)
{
    for (int i = 0; i < 9; i++)
    {
        if (num[i] == idx)
        {
            return i + 1;
        }
    }
}

int main(void)
{
    int max_number[9] = {0};

    for (int i = 0; i < 9; i++)
    {
        cin >> max_number[i];
    }

    cout << searchMax(max_number) << '\n' << searchIndex(max_number, searchMax(max_number)) << '\n';
    



}