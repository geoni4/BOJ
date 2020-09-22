#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int main() {
	int w, h, T, x, y;
	int tmpX, tmpY;
	cin.tie(NULL),ios::sync_with_stdio(false);
	freopen("10158.txt", "r", stdin);
	cin >> w >> h;
	cin >> x >> y;
	cin >> T;
	tmpX = (T + x) % (2 * w);
	tmpY = (T + y) % (2 * h);
	if (tmpX >= w)	x = w - tmpX % w;
	else x = tmpX;
	if (tmpY >= h)	y = h - tmpY % h;
	else y = tmpY;
	cout << x << " " << y;
	return 0;
}