#include <iostream>
using namespace std;
void hanoi(int n, int f, int t, int tmp) {
	if (n == 1) cout << f << " " << t << '\n';
	else {
		hanoi(n - 1, f, tmp, t);
		cout << f << " " << t << '\n';
		hanoi(n - 1, tmp, t, f);
	}
}

int main() {
	int n;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(n, 1, 3, 2);
	return 0;
}