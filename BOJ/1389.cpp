#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define INF 987654321
#define MIN(A, B) (A) < (B) ? (A) : (B)

using namespace std;

int main() {
	int adj[100][100];
	int N, M, i, j, sum, tmp, idx;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("1389.txt", "r", stdin);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				adj[i][j] = 0;
				continue;
			}
			adj[i][j] = INF;
		}
	}
	for (int m = 0; m < M; m++) {
		cin >> i >> j;
		adj[i-1][j-1] = 1;
		adj[j-1][i-1] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			for (int k = 0; k < N; k++) {
				if (i == k || j == k) continue;
				adj[i][k] = MIN(adj[i][j] + adj[j][k], adj[i][k]);
				adj[k][i] = adj[i][k];
			}
		}
	}
	sum = INF;
	for (int i = 0; i < N; i++) {
		tmp = 0;
		for (int j = 0; j < N; j++)
			tmp += adj[i][j];
		if (sum > tmp) {
			sum = tmp;
			idx = i+1;
		}
	}
	cout << idx;
	return 0;
}