#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N, map[1001], max_cnt=0;

	freopen("2304.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < 1001; i++)
		map[i] = 0;
	int x, y, max_x=0, min_x=1000, max_y=0, min_y=1000, sum=0;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		map[x] = y;
		if (max_x < x) max_x = x;
		if (min_x > x) min_x = x;
		if (max_y < y) max_y = y;
		if (min_y > y) min_y = y;
	}
	
	for (int i = min_x; map[i] != max_y; i++) {
		if (map[i + 1] <= map[i]) map[i + 1] = map[i];
		sum += map[i];
	}
	for (int i = max_x; map[i] != max_y; i--) {
		if (map[i - 1] <= map[i]) map[i - 1] = map[i];
		sum += map[i];
	}
	for (int i = min_x; i <= max_x; i++) {
		if (map[i] == max_y) max_cnt++;
	}
	if (max_cnt >= 1) {
		int cnt=0;
		for (int i = min_x; cnt != max_cnt ; i++) {
			if (map[i] == max_y) cnt++;
			if(cnt>=1)	sum += max_y;
		}
	}
	
	cout << sum;
	return 0;
}