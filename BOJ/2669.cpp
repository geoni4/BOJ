#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;


bool visited[100][100];
int main() {
	int x1, x2, y1, y2, cnt =0;
	freopen("2669.txt", "r", stdin);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 100; i++)
		memset(visited[i], 0, 100);
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++) {
				if (visited[i][j]) continue;
				visited[i][j] = true;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}