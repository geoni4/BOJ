#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int map[1001][1001], phase[1001];
int num[1001], memo[1001];
int chk[1001];

int queue[1000000];
int f, r;


int bfs(int end, int N) {
	int u, max = 0;
	for (int i = 1; i <= N; i++) {
		if (!phase[i])
			queue[++r] = i;
	}


	while (f != r) {
		u = queue[++f];
		if (phase[u]) continue;
		if (map[u][0] && !chk[u]) {
			for (int i = 1; i <= map[u][0]; ++i) {
				chk[u] = 1;
				queue[++r] = map[u][i];
				if (memo[map[u][i]] <= num[u] + memo[u])
					memo[map[u][i]] = num[u] + memo[u];
				phase[map[u][i]]--;
			}
		}
		if (!phase[end]) return num[end] + memo[end];
	}
}


int main() {
	freopen("1005.txt.", "r", stdin);
	int test_case, N, order, value, idx, end;
	cin >> test_case;
	for (int tc = 1; tc <= test_case; ++tc) {
		cin >> N >> order;
		for (int i = 0; i <= N; ++i) {
			memo[i] = 0;
			chk[i] = 0;
			num[i] = 0;
			map[i][0] = 0;
			phase[i] = 0;
		}
		f = r = -1;

		for (int i = 1; i <= N; ++i)
			cin >> num[i];

		for (int i = 0; i < order; ++i) {
			cin >> idx >> value;
			map[idx][++map[idx][0]] = value;
			phase[value]++;
		}
		cin >> end;
		printf("%d\n", bfs(end, N));
	}
	return 0;
}