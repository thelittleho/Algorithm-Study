#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    deque<int> dq;

    // 원소 추가 방법
    dq.push_front(10); // 10
    dq.push_back(20); // 10 20
    dq.push_front(30); // 30 10 20

    dq.insert(dq.begin() + 1, 40); // 30 40 10 20

    // 크기
    cout << dq.size() << '\n'; // 4
    if (dq.empty())
    {
        cout << "비어있음" << '\n';
    }
    else
    {
        cout << "비어있지 않음" << '\n';
    }

    // 원소 삭제
    dq.pop_front(); // 40 10 20
    dq.pop_back(); // 40 10

    dq.erase(dq.begin() + 1); // 40

    dq.clear(); // {}

    // 원소 접근
    cout << dq.front() << '\n'; 
    cout << dq.back() << '\n';
    cout << dq[0] << '\n';
}