#include <iostream>
#define MAX(A , B) (A) > (B) ? (A) : (B)
using namespace std;

int map[501], sol[501];

int main() {
	int n, max_v = 0, cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int idx;
		cin >> idx;
		cin>> map[idx];
	}
	for (int i = 1; i <= 500; i++) {
		if (!map[i]) continue;
		if (cnt == n) break;
		cnt++;
		if (cnt == 1) {
			sol[i] = 1;
			max_v = 1;
		}
		for (int j = 1; j <= i; j++) {
			if (map[i] > map[j]) {
				sol[i] = MAX(sol[i], sol[j] + 1);
			}
			else sol[i] = MAX(sol[i], 1);
			max_v = MAX(sol[i], max_v);
		}
	}
	cout << n - max_v;
	return 0;
}