#include <iostream>
#define MAX(A , B) (A) > (B) ? (A) : (B)
using namespace std;

int map[10001], sol[10001];

int main() {
	int n, max_v=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
		if (i == 0) sol[i] = 1;
		for (int j = 0; j < i; j++) {
			if (map[i] > map[j]) {
				sol[i] = MAX(sol[i], sol[j] + 1);
			}
			else sol[i] = MAX(sol[i], 1);
			max_v = MAX(sol[i], max_v);
		}
		max_v = MAX(sol[i], max_v);
	}
	cout << max_v;
	return 0;
}