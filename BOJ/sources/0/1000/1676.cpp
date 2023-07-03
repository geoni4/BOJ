#include <iostream>

using namespace std;
int n2, n5, n10;

void number_of_zero(int n) {
	if (!(n % 10)) {
		n10++;
		n /= 10;
		number_of_zero(n);
	}
	else if (!(n % 5)) {
		n5++;
		n /= 5;
		number_of_zero(n);
	}
	else if (!(n % 2)) {
		n2++;
		n /= 2;
		number_of_zero(n);
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		number_of_zero(i);
	}
	int num = 0;
	num = n2 < n5 ? n2 : n5;
	num += n10;
	cout << num;
	return 0;
}