#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 2; ;) {
		if (n == 1) break;
		if (n % i == 0) {
			n = n / i;
			cout << i << '\n';
		}
		else i++;
	}
	return 0;
}