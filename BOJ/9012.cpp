#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool ps(string a) {
	stack<char> PS;
	for (int i = 0; i<a.size(); i++) {
		if (a[i] == '(') {
			PS.push(a[i]);
		}
		else if (a[i] == ')') {
			if (PS.size() == 0)		return 0;
			else if (PS.top() == '(') PS.pop();
			else return 0;
		}
	}
	if (PS.size() != 0) return 0;
	return 1;
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int test_case;
	string tmp;
	cin >> test_case;
	for (int t = 0; t < test_case; t++) {
		cin >> tmp;
		if (!ps(tmp)) cout << "NO" << '\n';
		else cout << "YES" << '\n';
	}
	return 0;
}