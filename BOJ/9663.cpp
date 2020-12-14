#include <cstdio>

using namespace std;

int map[15][15];

int n, cnt;

int dx[3] = { 1, 0, -1 };
int dy[3] = { 1, 1, 1 };

bool validCheck(int x, int y) {
	if (x <0 || x>= n || y>= n) return false;
	return true;
}



void nQ(int line) {
	if (line == n) {
		cnt++;
		return;
	}
	
	for (int x = 0; x < n; x++) {
		if (map[line][x]) continue;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < n; j++) {
				int newX = x + j*dx[i], newY = line + j*dy[i];
				if (!validCheck(newX, newY)) break;
				if (!map[newY][newX]) map[newY][newX] = line + 1;
			}
		}
		nQ(line + 1);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < n; j++) {
				int newX = x + j * dx[i], newY = line + j * dy[i];
				if (!validCheck(newX, newY)) break;
				if (map[newY][newX]==line+1) map[newY][newX] = 0;
			}
		}
	}
}

int main() {
	
	scanf("%d", &n);
	nQ(0);
	printf("%d", cnt);
	return 0;
}