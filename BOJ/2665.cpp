//다시 풀어보기
#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<queue>
#include<memory.h>
using namespace std;
const int m = 55;
const int dr[] = { 0,0,1,-1 };
const int dc[] = { 1,-1,0,0 };
char im[m][m];
int imap[m][m];
int vis[m][m];
const int INF = 1 << 22;

struct pos {
	int r, c, m;
	pos() {}
	pos(int ir, int ic, int im) : r(ir), c(ic), m(im) {}
};

int main() {
	int n;
	memset(imap, -1, sizeof(imap));
	freopen("2665.txt", "r", stdin);
	scanf("%d", &n);
	for (int r = 0; r < n; r++) {
		scanf("%s", im[r]);
		for (int c = 0; c < n; c++) {
			imap[r][c] = im[r][c] - '0';
		}
	} // input

	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			vis[r][c] = INF;
		}
	}
	vis[0][0] = 0;
	queue<pos> Q;
	Q.push(pos(0, 0, 0));
	while (!Q.empty()) {
		int hr = Q.front().r;
		int hc = Q.front().c;
		int hm = Q.front().m;
		Q.pop();
		//if()

		for (int i = 0; i < 4; i++) {
			int tr = hr + dr[i];
			int tc = hc + dc[i];

			if (tr < 0 || n <= tr || tc < 0 || n <= tc) continue;

			if (imap[tr][tc] == 0 && (vis[tr][tc] > (vis[hr][hc] + 1))) {
				vis[tr][tc] = vis[hr][hc] + 1;
				Q.push(pos(tr, tc, vis[tr][tc]));
			}
			else if (imap[tr][tc] == 1 && (vis[tr][tc] > vis[hr][hc])) {
				vis[tr][tc] = vis[hr][hc];
				Q.push(pos(tr, tc, vis[tr][tc]));
			}
		}
	}

	printf("%d\n", vis[n - 1][n - 1]);

	return 0;
}