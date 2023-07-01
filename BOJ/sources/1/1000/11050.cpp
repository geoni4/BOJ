#include <iostream>

using namespace std;

int main() {
	int n, r, ans = 1;
	cin >> n >> r;
	for (int i = 0; i < r; i++) {
		ans *= n - i;
		ans /= i + 1;
	}
	cout << ans;
	return 0;
}