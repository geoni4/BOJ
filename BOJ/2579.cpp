#include <iostream>
#define MAX(A, B) (A) > (B) ? (A) : (B)
using namespace std;

int map[301], sol[301];

int main() {
	int n;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> map[i];
		if (i == 1)			sol[i] += map[i];
		else if (i == 2)	sol[i] += MAX(sol[i - 2] + map[i], sol[i - 1] + map[i]);
		else				sol[i] += MAX(sol[i - 2] + map[i], sol[i - 3] + map[i - 1] + map[i]);
	}
	cout << sol[n];
	return 0;
}