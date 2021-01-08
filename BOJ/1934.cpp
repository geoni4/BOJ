#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int tmp, n;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int on, tw, GCF, LCM, smler, test_case;
	cin >> test_case;
	for (int tc = 0; tc < test_case; tc++) {
		cin >> on >> tw;
		GCF = gcd(on, tw);
		LCM = on * tw / GCF;
		cout << LCM << '\n';
	}
	return 0;
}