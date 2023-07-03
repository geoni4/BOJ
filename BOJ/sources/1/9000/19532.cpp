#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

typedef struct {
	int x, y, c;
}coord;

int main() {
	freopen("./resources/1/9000/19532.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int x, y;
	coord a1, a2;
	cin >> a1.x >> a1.y >> a1.c;
	cin >> a2.x >> a2.y >> a2.c;
	x = (a1.c * a2.y - a2.c * a1.y) / (a1.x * a2.y - a2.x * a1.y);
	y = (a1.c * a2.x - a2.c * a1.x) / (a1.y * a2.x - a2.y * a1.x);
	cout << x << ' ' << y << '\n';

	return 0;
}