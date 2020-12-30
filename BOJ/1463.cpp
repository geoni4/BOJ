#include <iostream>
#define MIN(A, B, C) ((A) < (B) ? ( (A) < (C)  ? (A) : (C) ) : ( (B) < (C) ? (B) : (C) ) )
using namespace std;

int map[1000001];

int main() {
	int n;
	cin >> n;
	map[0] = 0, map[1] = 0;

	for (int i = 2; i <= n; i++) {
		int on, tw, th;
		on = i - 1;
		if (!(i % 2))	tw = i / 2;
		else			tw = on;
		if (!(i % 3))	th = i / 3;
		else			th = on;
		map[i] += MIN(map[on] + 1, map[tw] + 1, map[th] + 1);
	}
	cout << map[n];
	return 0;
}