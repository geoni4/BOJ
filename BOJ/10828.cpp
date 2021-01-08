#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> s;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	string cmd;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			int tmp;
			cin >> tmp;
			s.push(tmp);
		}
		else if (cmd == "top") {
			if (!s.size())	cout << -1 << '\n';
			else			cout << s.top() << '\n';
		}
		else if (cmd == "size") {
			cout << s.size() << '\n';
		}
		else if (cmd == "pop") {
			if (!s.size()) cout << -1 << '\n';
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (cmd == "empty") {
			if (!s.size())	cout << 1 << '\n';
			else			cout << 0 << '\n';
		}
	}
	return 0;
}