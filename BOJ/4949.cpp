#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool ps(string a) {
	stack<char> PS;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '(' || a[i] == '[') {
			PS.push(a[i]);
		}
		else if (a[i] == ')') {
			if (PS.size() == 0)		return 0;
			else if (PS.top() == '(') PS.pop();
			else return 0;
		}
		else if (a[i] == ']') {
			if (PS.size() == 0)		return 0;
			else if (PS.top() == '[') PS.pop();
			else return 0;
		}
		else if (a[i] == '.') break;
	}
	if (PS.size() != 0) return 0;
	return 1;
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	string tmp;
	while(1){
		getline(cin, tmp);
		if (tmp[0] == '.') return 0;
		if (!ps(tmp)) cout << "no" << '\n';
		else cout << "yes" << '\n';
	}
	return 0;
}