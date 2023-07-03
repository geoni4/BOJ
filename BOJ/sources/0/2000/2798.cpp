#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MAX(A, B) (A) >= (B) ? (A) : (B)
using namespace std;
int map[100];
int main() {
	freopen("2798.txt", "r", stdin);

	int N, M, ans=0;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (map[i] + map[j] + map[k] <= M) ans = MAX(ans, map[i] + map[j] + map[k]);
			}
		}
	}
	cout << ans;
	
	return 0;
}