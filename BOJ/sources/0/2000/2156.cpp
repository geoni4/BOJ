#include <iostream>
#define MAX(A, B) (A) > (B) ? (A) : (B)
#define MAX3(A, B, C) ((A) > (B) ? ( (A) > (C)  ? (A) : (C) ) : ( (B) > (C) ? (B) : (C) ) )
using namespace std;

int map[10001], sol[10001];


int main() {
	int n, max_v=0;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> map[i];
		if (i == 1)			sol[i] += map[i];
		else if (i == 2)	sol[i] += MAX(sol[i - 2] + map[i], sol[i - 1] + map[i]);
		else				sol[i] += MAX3(sol[i - 2] + map[i], sol[i - 3] + map[i - 1] + map[i], max_v);
		max_v = MAX(max_v, sol[i]);
	}
	cout << max_v;
	return 0;
}