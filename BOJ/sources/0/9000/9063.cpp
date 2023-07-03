#define _CRT_SECURE_NO_WARNINGS
#define INT_MAX 2147483647
#define INT_MIN -2147483648

#include <iostream>

using namespace std;


typedef struct {
	int x_max;
	int x_min;
	int y_max;
	int y_min;
}coord;

int main() {
	freopen("./resources/0/9000/9063.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int N;
	int x, y;
	coord cd = { INT_MIN, INT_MAX, INT_MIN, INT_MAX };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		cd.x_max = cd.x_max > x ? cd.x_max : x;
		cd.x_min = cd.x_min < x ? cd.x_min : x;
		cd.y_max = cd.y_max > y ? cd.y_max : y;
		cd.y_min = cd.y_min < y ? cd.y_min : y;
	}

	cout << (cd.x_max - cd.x_min) * (cd.y_max - cd.y_min);

	return 0;
}
