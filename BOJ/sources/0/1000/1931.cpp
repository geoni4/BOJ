#include <iostream>
#include <algorithm>
using namespace std;

int n, last, cnt;
typedef struct _table{
	int start;
	int end;
}TABLE;

bool cmp(TABLE &a, TABLE &b) {
	if (a.end == b.end) return a.start < b.start;
	return a.end < b.end;
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	TABLE* tim = new TABLE[n];
	for (int i = 0; i < n; i++) {
		cin >> tim[i].start >> tim[i].end;
	}
	sort(&tim[0], &tim[n], cmp);
	for (int i = 0; i < n; i++) {
		if (tim[i].start >= last) {
			cnt++;
			last = tim[i].end;
		}
	}
	cout << cnt;
	delete[] tim;
	return 0;
}