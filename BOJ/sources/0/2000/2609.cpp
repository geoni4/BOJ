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
	int on, tw, GCF, LCM, smler, test_case;
	cin >> on >> tw;
	GCF = gcd(on, tw);
	LCM = on * tw / GCF;
	cout << GCF << '\n' << LCM;
	return 0;
}