#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MAX(A, B) (A)>= (B) ? (A) : (B)

using namespace std;

int main() {
	int maze[1000][1000], D[1000][1000];
	int N, M;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("11048.txt", "r", stdin);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			cin >> maze[i][j];
			D[i][j] = maze[i][j];
			if (j - 1 >= 0)		D[i][j] = MAX(D[i][j - 1] + maze[i][j], D[i][j]);
			if (i - 1 >= 0)		D[i][j] = MAX(D[i - 1][j] + maze[i][j], D[i][j]);
			if (i - 1 >= 0 && j - 1 >= 0) D[i][j] = MAX(D[i-1][j-1] + maze[i][j], D[i][j]);
		}
	cout << D[N-1][M-1];

	return 0;
}