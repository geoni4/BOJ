#include <iostream>

using namespace std;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	long long n, r, ans = 1, test_case;
	cin >> test_case;
	for (int tc = 0; tc < test_case; tc++) {
		ans = 1;
		cin >> r >> n;
		for (int i = 0; i < r; i++) {
			ans *= n - i;
			ans /= (i+1);
		}
		cout << ans << '\n';
	}
	return 0;
}