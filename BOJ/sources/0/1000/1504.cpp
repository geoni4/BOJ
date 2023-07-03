#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define MIN(A, B) (A<=B) ? A : B
#define INF	987654321

using namespace std;

int adj[801][801], dist[801];

int queue[200000][3];

int f = -1, r = -1;
int main() {
	int N, E, a, b, c, ans, d, start, res[2] = { 0, 0 };
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("1504.txt", "r", stdin);
	cin >> N >> E;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++)
			adj[i][j] = INF;
	}

	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
		adj[a][b] = c;
		adj[b][a] = c;
	}
	int arr[4] = { 1, 0, 0, N };

	cin >> arr[1] >> arr[2];

	int v;
	for (int k = 0; k < 2; k++) {
		for (int n = 0; n < 3; n++) {
			for (int i = 0; i <= N; i++)
				dist[i] = INF;
			v = arr[n];
			start = v;
			int prev = 0;
			adj[start][start] = 0;
			f = r = -1;
			queue[++r][0] = v, queue[r][1] = 0, queue[r][2] = prev;
			while (f != r) {
				v = queue[++f][0], d = queue[f][1], prev = queue[f][2];
				for (int i = 1; i <= N; i++) {
					if (prev) {
						if (d <= dist[v])	dist[v] = d;
						if (dist[i] > dist[v] + adj[v][i]) {
							dist[i] = MIN(dist[i], dist[v] + adj[v][i]);
							queue[++r][0] = i, queue[r][1] = dist[i], queue[r][2] = v;
						}
					}
					else {
						dist[i] = adj[v][i];
						if (dist[i] != INF && dist[i]) queue[++r][0] = i, queue[r][1] = dist[i], queue[r][2] = v;
					}
				}
			}
			adj[start][start] = INF;
			v = arr[n + 1];
			if (dist[v] == INF) {
				cout << -1 << endl;
				return 0;
			}
			res[k] += dist[v];
		}
		int tmp = arr[1];
		arr[1] = arr[2];
		arr[2] = tmp;
	}
	ans = MIN(res[0], res[1]);
	cout << ans << endl;

	return 0;
}