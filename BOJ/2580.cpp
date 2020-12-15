#include <iostream>

using namespace std;

int map[9][9];

int chk[9];
int n, cnt;
typedef struct _COORD {
	int x, y;
}COORD;


void right() {
	
		COORD point = { -1, -1 };
		for (int j = 0; j < 9; j++) {
			int tmp = map[i][j];
			if (!tmp) {
				if (point.x != -1 && point.y != -1) break;
				point.x = j, point.y = i;
			}
			else {
				chk[tmp - 1] = 1;
			}
		}
		if (point.x == -1 && point.y == -1);

}


void sudoku() {
	for (int i = 0; i < 9; i++) {
	}
}

int main() {

	for (int y = 0; y < 9; y++)
		for (int x = 0; x < 9; x++) {
			int tmp;
			cin >> tmp;
			map[y][x] = tmp;
			if (tmp == 0) cnt++;
		}
	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 9; x++)
			cout << map[y][x] << ' ';
		cout << '\n';
	}
	return 0;
}