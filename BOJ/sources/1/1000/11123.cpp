#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

char map[100][100];
bool visited[100][100];
typedef struct _stack {
	int y, x;
}STACK;
STACK stack[10000];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };
int top;

int dfs(int height, int width) {
	int cnt = 0;
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			int v = y, u= x;
			stack[++top].y = v, stack[top].x = u;
			if (visited[v][u]) continue;
			if (map[v][u] == '#') cnt++;
			visited[v][u] = true;
			while (top != -1) {
				v = stack[top].y, u = stack[top--].x;
				if (map[v][u] == '.') continue;
				for (int i = 0; i < 4; i++) {
					int newy = v + dy[i], newx = u + dx[i];
					if (newy < 0 || newy >= height || newx < 0 || newx >= width) continue;
					if (map[newy][newx] == '.' || visited[newy][newx]) continue;
					visited[newy][newx] = true;
					stack[++top].y = newy, stack[top].x = newx;
				}
			}
		}
	}
	return cnt;
}

int main() {
	freopen("11123.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int tc, H, W;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		cin >> H >> W;
		top = -1;
		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				cin >> map[y][x];
				visited[y][x] = false;
			}
		}
		cout << dfs(H, W) << '\n';
	}
	return 0;
}