#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#define MIN(A, B) (A) < (B) ? (A) : (B)

int n, ans = 9876543210;
int map[20][20];
bool visited[20];

int abs(int a, int b) {
	if (a > b) return a - b;
	return b - a;
}

void combi(int cnt, int cur) {
	if (cnt == n / 2) {
		int a = 0;
		int b = 0;
		for (int i = 0; i < n-1; i++) {
			for(int j =i+1;j<n;j++){
				if (visited[i] && visited[j]) {
					a += map[i][j] + map[j][i];
				}
				else if (!visited[i] && !visited[j]) {
					b += map[i][j] + map[j][i];
				}
			}
		}
		ans = MIN(ans, abs(a - b));
		return;
	}

	for (int i = cur; i < n; i++) {
		if (!visited[i] && i > cur) {
			visited[i] = 1;
			if (ans == 0) return;
			combi(cnt + 1, i);
			visited[i] = 0;
		}
	}
}


int main() {
	freopen("14889.txt", "r", stdin);
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> map[y][x];
		}
	}
	combi(0, 0);
	cout << ans;
	return 0;
}