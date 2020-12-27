#include <iostream>
#define MIN3(A, B, C) ((A) <= (B) ? ( (C) <= (A) ? (C) : (A) ): ( (C) <= (B) ? (C) : (B) ))
#define MIN(A, B) (A) <= (B) ? (A) : (B)
using namespace std;

int map[1000][3];
int n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int tmp;
			cin >> tmp;
			map[i][j] = tmp;
			if (i == 0) continue;
			if (j == 0)			map[i][j] += MIN(map[i - 1][1], map[i - 1][2]);
			else if (j == 1)	map[i][j] += MIN(map[i - 1][0], map[i - 1][2]);
			else if (j == 2)	map[i][j] += MIN(map[i - 1][0], map[i - 1][1]);
		}
	}
	cout << MIN3(map[n-1][0], map[n-1][1], map[n-1][2]);
	return 0;
}