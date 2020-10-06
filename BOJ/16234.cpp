#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int map[50][50], memo[50][50], num_chk[50][50];
bool visited[50][50];
int queue[20000][2];
int f, r, L, R;
int cnt[1000][2];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

bool isEqual(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] != memo[i][j]) return 0;
		}
	}
	return 1;
}
int BFS(int n) {
	int u, v, num = 1000, ret = 0;
	while (1) {
		for (int i = 0; i < num; i++)
			for (int j = 0; j < 2; j++)
				cnt[i][j] = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				num_chk[i][j] = 0;
				visited[i][j] = 0;
			}
		num = 1;
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < n; x++) {
				if (visited[y][x]) continue;
				f = r = -1;
				v = y, u = x;
				queue[++r][0] = v, queue[r][1] = u;
				while (f != r) {
					v = queue[++f][0], u = queue[f][1];
					if (visited[v][u]) continue;
					cnt[num][0] += memo[v][u], cnt[num][1]++, num_chk[v][u] = num;
					visited[v][u] = true;
					int tmpX, tmpY;
					for (int i = 0; i < 4; i++) {
						tmpX = u + dx[i], tmpY = v + dy[i];
						if (tmpX < 0 || tmpX >= n || tmpY < 0 || tmpY >= n || visited[tmpY][tmpX]) continue;
						int M = abs(memo[v][u] - memo[tmpY][tmpX]);
						if (M >= L && M <= R) queue[++r][0] = tmpY, queue[r][1] = tmpX;
					}
				}
				if (!f && !r) cnt[num][0] -= memo[v][u], cnt[num][1]--, num_chk[v][u] = 0;
				if (cnt[num][0] != 0)	num++;
			}
		}
		
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < n; x++) {
				if (num_chk[y][x]) memo[y][x] = cnt[num_chk[y][x]][0] / cnt[num_chk[y][x]][1];
			}
		}
		if (isEqual(n)) return ret;
		ret++;
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < n; x++) {
				map[y][x] = memo[y][x];
			}
		}
		
	}
}



int main() {
	int N;
	freopen("16234.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> N >> L >> R;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			memo[i][j] = map[i][j];
		}

	cout << BFS(N);
	return 0;
}