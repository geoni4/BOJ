#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MAX(A, B) A>=B ? A : B
using namespace std;

int score[2][10001];

int main() {
	freopen("14728.txt", "r", stdin);
	int N, T, K, S;
	cin >> N >> T;

	for (int i = 0; i <= T; i++)		score[0][i] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> K >> S;
		for (int j = 0; j <= T; j++) {
			if (j < K) score[i%2][j] = score[(i - 1)%2][j];
			else score[i%2][j] = MAX(score[(i - 1)%2][j - K] + S, score[(i - 1)%2][j]);
		}
	}
	cout << score[N % 2][T];
	return 0;
}