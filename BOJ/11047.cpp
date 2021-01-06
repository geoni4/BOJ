#include <iostream>

using namespace std;
int coin[10], num;

int main() {
	int n, won, i;
	cin >> n >> won;
	for (i = 0; i < n; i++) {
		cin >> coin[i];
	}
	for (i = n-1; i >= 0; i--) {
		num += (won /coin[i]);
		won %= coin[i];
	}
	cout << num;
	return 0;
}