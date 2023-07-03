#include <iostream>

using namespace std;
int map[21][21][21];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	
	if (a > 20 || b > 20 || c > 20) {
		map[20][20][20] = w(20, 20, 20);
		return map[20][20][20];
	}
	if (map[a][b][c] != 0) return map[a][b][c];
	if (a < b && b < c) {
		map[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1,c);
	}
	else {
		map[a][b][c] = w(a - 1, b, c) + w(a - 1,b - 1,c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
	return map[a][b][c];
}


int main() {
	int a, b, c;
	cin.tie(0), ios::sync_with_stdio(0);
	map[0][0][0] = 1;
	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		cout<< "w(" << a << ", "<<b<< ", " <<c << ") = "<<w(a,b,c)<< "\n";
	}
	return 0;
}