#define _CRT_SECURE_NO_WARNINGS


#include <iostream>

using namespace std;

typedef long long ll;
int main() {
	freopen("./resources/1/3000/13909.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);
	ll N;
	cin >> N;
	int cnt = 0;
	for (ll i = 1; i*i <= N; i++) {
		cnt++;
	}
	cout << cnt;

	return 0;
}