#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define INF 998877665544332211
vector<pair <int, int> > g[100001];

bool go[100001];
long long dist[100001];

void dijkstra(int start) {
	priority_queue< pair<long long, int> > pq;
	pq.push({ 0, start });
	dist[start] = 0;
	while (!pq.empty()) {
		int current = pq.top().second;
		long long dst = -pq.top().first;
		pq.pop();
		if (dist[current] < dst) continue;
		for (int i = 0; i < g[current].size(); i++) {
			if (go[g[current][i].first] == 1) continue;
			long long next = dist[current] + g[current][i].second;
			long long before = dist[g[current][i].first];
			if (next < before) {
				dist[g[current][i].first] = next;
				pq.push({ -next, g[current][i].first });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("17396.txt", "r", stdin);
	int N, M;	cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> go[i];
	go[N - 1] = 0;
	for (int i = 0; i < M; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		g[x].push_back({ y, z });
		g[y].push_back({ x, z });
	}
	for (int i = 0; i < N; i++) dist[i] = INF;
	dijkstra(0);
	if (dist[N - 1] == INF)	cout << -1;
	else  cout << dist[N - 1];
	return 0;
}