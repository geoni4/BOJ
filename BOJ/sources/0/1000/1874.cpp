#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

stack<int> ss;
vector<char> vv;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int n, tmp;
	cin >> n;
	for (int i = 1; i <= n+1; i++) {
		if (i > n && ss.size() == 0) break;
		cin >> tmp;
		while (1) {
			if (i == 1 || ss.size() == 0) {
				ss.push(i);
				vv.push_back('+');
				i++;
			}
			else if (ss.top() < tmp) {
				ss.push(i);
				vv.push_back('+');
				i++;
			}
			else if (ss.top() == tmp) {
				ss.pop();
				vv.push_back('-');
				i--;
				break;
			}
			else if (ss.top() > tmp) {
				cout << "NO";
				return 0;
			}
		}
		
	}
	for (int i = 0; i < vv.size(); i++) {
		cout << vv[i] << '\n';
	}
	return 0;
}