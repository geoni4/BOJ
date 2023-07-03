#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
int map[250][250];
bool visited[250][250];
int dx[] = { 1, 1, 0, -1, -1 ,-1, 0 ,1 };
int dy[] = { 0, 1, 1, 1, 0 ,-1, -1 ,-1 };
int stack[100000][2];
int top = -1;
int DFS(int N, int M) {
	int cnt = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			int v = y, u = x;
			if (visited[v][u]) continue;
			visited[v][u] = true;
			if (!map[v][u]) continue;
			stack[++top][0] = v, stack[top][1] = u;

			cnt++;
			while (top != -1) {
				v = stack[top][0], u = stack[top--][1];
				visited[v][u] = true;
				for (int i = 0; i < 8; i++) {
					int newy = v + dy[i], newx = u + dx[i];
					if (newy < 0 || newy >= N || newx < 0 || newx >= M) continue;
					if(visited[newy][newx] || !map[newy][newx]) continue;
					stack[++top][0] = newy, stack[top][1] = newx;
					visited[newy][newx] = true;
				}
			}
		}
	}
	return cnt;
}

int main() {
	
	int N, M;
	freopen("14716.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> map[i][j];

	cout << DFS(N, M);

	return 0;
}