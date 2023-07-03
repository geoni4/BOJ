#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int absol(int a) {
	if (a <0) return - a;
	return a;
}
typedef struct _sqr {
	int x[2];
	int y[2];
} SQUARE;

struct DOT {
	int x;
	int y;
};
int main() {
	freopen("2527.txt", "r", stdin);
	DOT center[2], center_dist, half_len;
	SQUARE sqr[2];
	for (int i = 0; i < 4; i++) {
		cin >> sqr[0].x[0] >> sqr[0].y[0] >> sqr[0].x[1] >> sqr[0].y[1];
		cin >> sqr[1].x[0] >> sqr[1].y[0] >> sqr[1].x[1] >> sqr[1].y[1];
		center[0].x = (sqr[0].x[0] + sqr[0].x[1]), center[0].y = (sqr[0].y[0] + sqr[0].y[1]);
		center[1].x = (sqr[1].x[0] + sqr[1].x[1]), center[1].y = (sqr[1].y[0] + sqr[1].y[1]);
		center_dist.x = absol(center[0].x - center[1].x);
		center_dist.y = absol(center[0].y - center[1].y);

		half_len.x = (sqr[0].x[1] - sqr[0].x[0]) + (sqr[1].x[1] - sqr[1].x[0]);
		half_len.y = (sqr[0].y[1] - sqr[0].y[0]) + (sqr[1].y[1] - sqr[1].y[0]);
		if (center_dist.x > half_len.x || center_dist.y > half_len.y) cout << "d" << endl;
		else if (center_dist.x == half_len.x && center_dist.y == half_len.y) cout << "c" << endl;
		else if (center_dist.x == half_len.x && center_dist.y < half_len.y) cout << "b" << endl;
		else if (center_dist.x < half_len.x && center_dist.y == half_len.y) cout << "b" << endl;
		else cout << "a" << endl;
	}
	return 0;
}