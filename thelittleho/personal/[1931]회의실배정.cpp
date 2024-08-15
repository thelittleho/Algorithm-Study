#include <iostream>
#include <algorithm>
using namespace std;

struct meeting
{
    int start, end;

    bool operator<(meeting &m)
    {
        if (end != m.end) return end < m.end; // 정렬하게 되면 끝나는 순서 순으로
        return start < m.start; // 끝나는 시간이 같다면 시작하는 순서 순으로
    }
};
