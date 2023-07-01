#include <iostream>
#define MAX(A, B) (A) > (B) ? (A) : (B)
using namespace std;

int map[100000];

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int n, ans=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
		if (i == 0) {
			ans = map[i];
			continue;
		}
		if (map[i - 1] >= 0) {
			map[i] += map[i - 1];
		}
		ans = MAX(map[i], ans);
	}
	cout << ans;
	return 0;
}