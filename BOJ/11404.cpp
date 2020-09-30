#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define INF 987654321
#define MIN(A, B) (A) < (B) ? (A) : (B)

using namespace std;

bool isEqual(int adj[][100], int adj_tmp[][100], int N) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (adj[i][j] != adj_tmp[i][j]) return false;
	return true;
}

int main() {
	int adj[100][100], adj_tmp[100][100];
	int N, M, i, j, tmp;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("11404.txt", "r", stdin);
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
		cin >> i >> j >> tmp;
		adj[i - 1][j - 1] = MIN(adj[i-1][j-1],tmp);
	}
	while (1) {
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				adj_tmp[i][j] = adj[i][j];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == j) continue;
				for (int k = 0; k < N; k++) {
					if (i == k || j == k) continue;
					adj[i][k] = MIN(adj[i][j] + adj[j][k], adj[i][k]);
				}
			}
		}
		if (isEqual(adj, adj_tmp, N)) break;;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(adj[i][j] == INF)	cout << 0 << " ";
			else					cout << adj[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}