#include <iostream>

using namespace std;

int n2, n5;


int main() {
	long long n, r;
	cin >> n >> r;
	if (n / 2 < r) r = n - r;
	for (long long i = 2; i <= n; i *= 2) n2 += n / i;
	for (long long i = 2; i <= r; i *= 2) n2 -= r / i;
	for (long long i = 2; i <= n - r; i *= 2) n2 -= (n - r) / i;
	
	for (long long i = 5; i <= n; i *= 5) n5 += n / i;
	for (long long i = 5; i <= r; i *= 5) n5 -= r / i;
	for (long long i = 5; i <= n - r; i *= 5) n5 -= (n - r) / i;
	int num = 0;
	num = n2 < n5 ? n2 : n5;
	cout << num;
	return 0;
}