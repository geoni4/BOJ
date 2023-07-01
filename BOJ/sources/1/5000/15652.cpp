#include <iostream>

using namespace std;

int num_arr[10];
int visited[10];

int n, m;

void rcombi(int k, int r) {
	if (m == k) {
		for (int i = 0; i < m; i++)
			cout << num_arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = r; i <= n; i++) {
		num_arr[k] = i;
		rcombi(k + 1, i);
	}
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n >> m;
	rcombi(0, 1);
	return 0;
}