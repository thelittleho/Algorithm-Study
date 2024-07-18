#include <iostream>
#include <algorithm>
using namespace std;

struct position
{
    int x, y;
};

bool compare(position now, position last)
{
    if (now.y > last.y) return false;
    if (now.y == last.y && now.x > last.x) return false;
    else return true;
    
}

int main(void)
{
    int N;
    cin >> N;
    struct position pos[100001];

    for (int i = 0; i < N; i++)
    {
        cin >> pos[i].x >> pos[i].y;
    }

    sort(pos, pos + N, compare);

    for (int i = 0; i < N; i++)
    {
        cout << pos[i].x << " " << pos[i].y << "\n";
    }
}