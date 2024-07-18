#include <iostream>
#include <queue>
using namespace std;

queue<int> Q;
int main(void)
{
    int N ,val;
    string cmd;
    cin >> N;

    while (N--)
    {
        cin >> cmd;
        if (cmd == "push") {
			cin >> val;
			Q.push(val);
		}
		else if (cmd == "pop") {
			if (Q.empty()) cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (cmd == "size") {
			cout << Q.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (cmd == "front") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}
		else if (cmd == "back") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
    }
}