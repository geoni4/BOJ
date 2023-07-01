#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MIN(A, B) (A) <= (B) ? (A) : (B)
using namespace std;

int main() {
	int x, y, w, h, min_len=1000;
	freopen("1085.txt", "r", stdin);
	cin >> x >> y >> w >> h;
	for (int i = 0; i < 4; i++) {
		min_len = MIN(min_len, x);
		min_len = MIN(min_len, y);
		min_len = MIN(min_len, w-x);
		min_len = MIN(min_len, h-y);
	}
	cout << min_len;
	return 0;
}