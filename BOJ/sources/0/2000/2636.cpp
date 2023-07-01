#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
int chk[100][100], map[100][100], visited[100][100];
int dr[] = { 0, -1, 0, 1 };
int dc[] = { -1, 0, 1, 0 };

typedef struct _queue {
	int r, c;
}QUEUE;
QUEUE queue[20000];
typedef struct _cnt {
	int ret, cur_one, prev_one, two;
}COUNT;
typedef struct _ret {
	int ret, prev_one;
}RET;
int front, rear;

RET bfs(int N, int M) {
	COUNT cnt = { 0, 0, 0, 0 };
	while(1){
		cnt.cur_one = cnt.two = 0;
		front = rear = -1;
		int r = 0, c = 0;
		queue[++rear].r = r, queue[rear].c = c;
		while (front != rear) {
			r = queue[++front].r, c = queue[front].c;
			if (visited[r][c]) continue;
			visited[r][c] = 1;
			for (int i = 0; i < 4; i++) {
				int newr = r + dr[i], newc = c + dc[i];
				if (newr < 0 || newr >= N || newc < 0 || newc >= M) continue;
				if (map[newr][newc] && !visited[newr][newc]) {
					chk[newr][newc] = 2;
					cnt.cur_one++;
					visited[newr][newc] = 1;
				}
				if (!visited[newr][newc]) {
					queue[++rear].r = newr, queue[rear].c = newc;
					continue;
				}
				if (!map[r][c]) {
					chk[r][c] = 1;
					
				}
			}
		}
		if (cnt.cur_one == 0) return { cnt.ret, cnt.prev_one };
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (chk[i][j] == 2) map[i][j] = 0;
				chk[i][j] = 0;
				visited[i][j] = 0;
				if (i == 0 || i == N - 1 || j == 0 || j == M - 1)	chk[i][j] = 1;
			}
		}
		cnt.ret++;
		cnt.prev_one = cnt.cur_one;
	}
}


int main() {
	int N, M;
	freopen("2636.txt", "r", stdin);
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			scanf("%d", &map[i][j]);
			visited[i][j] = 0;
			if (i == 0 || i == N - 1 || j == 0 || j == M - 1)	chk[i][j] = 1;
		}
	RET res = bfs(N, M);
	printf("%d\n%d", res.ret,res.prev_one);
	
	return 0;
}
