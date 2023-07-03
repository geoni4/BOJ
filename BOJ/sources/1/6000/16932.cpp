#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
int lnk_chk[1000][1000];
bool map[1000][1000], visited[1000][1000];

typedef struct _queue {
	short y, x;
}STACK, QUEUE;
STACK stack[1000000];
QUEUE queue[1000000];
int N, M, top, f, r, cnt, max_res;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void dfs(int starty, int startx, int chk) {
	for (int v = starty; v < N; v++) {
		for (int u = startx; u < M; u++) {
			int y = v, x = u;
			if (!map[y][x]) {
				cnt = 0; continue;
			}
			if (visited[y][x]) continue;
			visited[y][x] = true;
			stack[++top].y = y, stack[top].x = x;
			cnt++;
			for (int i = 0; i < 4; i++) {
				int newy = y + dy[i], newx = x + dx[i];
				if (newy < 0 || newy >= N || newx < 0 || newx >= M) continue;
				if(visited[newy][newx] || !map[newy][newx]) continue;
				dfs(newy, newx, chk + 1);
			}
			if (chk) return;
			while (top != -1) {
				y = stack[top].y, x = stack[top--].x;
				lnk_chk[y][x] = cnt;
				for (int i = 0; i < 4; i++) {
					int newy = y + dy[i], newx = x + dx[i];
					if (newy < 0 || newy >= N || newx < 0 || newx >= M) continue;
					if (visited[newy][newx] || map[newy][newx]) continue;
					visited[newy][newx] = true;
					lnk_chk[newy][newx] += lnk_chk[y][x];
					queue[++r].y = newy, queue[r].x = newx;
					if (max_res <= lnk_chk[newy][newx]) max_res = lnk_chk[newy][newx] + 1;
				}
			}
			while (f != r) {
				visited[queue[++f].y][queue[f].x] = 0;
			}
			f = r = -1;
		}
	}
}
int main() {
	freopen("16932.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	
	cin >> N >> M;
	top = r = f = -1;
	for(int i=0; i<N;i++)
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			visited[i][j] = 0;
		}

	dfs(0, 0, 0);
	cout << max_res;
	return 0;
}