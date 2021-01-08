#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef pair<string, int> psi;

int main() {
	int test_case;
	cin >> test_case;
	for (int tc = 0; tc < test_case; tc++) {
		int n, ans = 1;
		vector< psi > a;
		string tmp1, tmp2;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> tmp1 >> tmp2;
			if (i == 0)
				a.push_back(psi(tmp2, 1));
			else {
				int j;
				for (j = 0; j < a.size(); j++) {
					if (a[j].first == tmp2) {
						a[j].second++;
						break;
					}
				}
				if (j == a.size())
					a.push_back(psi(tmp2, 1));
			}
		}
		for (int i = 0; i < a.size(); i++) 
			ans *= (a[i].second + 1);

		cout << ans - 1 << '\n';
	}
	return 0;
}
