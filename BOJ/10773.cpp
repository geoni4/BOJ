//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> s;
//
//int main() {
//	cin.tie(0), ios::sync_with_stdio(0);
//	int n, sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> tmp;
//		if (!tmp)	s.pop_back();
//		else		s.push_back(tmp);
//	}
//	for (int i = 0; i < s.size(); i++)
//		sum += s[i];
//	cout << sum;
//	return 0;
//}


#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (!tmp) {
			sum -= s.top();
			s.pop();
		}
		else {
			s.push(tmp);
			sum += tmp;
		}
	}
	cout << sum;
	return 0;
}