#include <iostream>
#define MAX(A , B) (A) > (B) ? (A) : (B)
using namespace std;

int map[1001], sol[1001][3];

int main() {
	int n, max_up=0, max_down=0, max_v=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	for (int i = 0; i < n; i++) {
		if (i == 0){
			sol[i][0] = 1;
			sol[n - 1 - i][1] = 1;
			sol[i][2] = sol[i][0] + sol[i][1]-1;
			sol[n - 1 - i][2] = sol[n - 1 - i][0]+sol[n - 1 - i][1]-1;
		}
		for (int j = 0; j < i; j++) {
			if (map[i] > map[j]) {
				sol[i][0] = MAX(sol[i][0], sol[j][0]+1);
			}
			else sol[i][0] = MAX(sol[i][0], 1);
			max_up = MAX(sol[i][0], max_up);
			if (map[n - 1 - i] > map[n - 1 - j]) {
				sol[n - 1 - i][1] = MAX(sol[n - 1 - i][1], sol[n - 1 - j][1]+1);
			}
			else sol[n - 1 - i][1] = MAX(sol[n - 1 - i][1], 1);
			max_down = MAX(sol[n - 1 - i][1], max_down);
			sol[i][2] = sol[i][0] + sol[i][1];
			sol[n - 1 - i][2] = sol[n - 1 - i][0] + sol[n - 1 - i][1];
		}
	}
	for (int i = 0; i < n; i++) {
		max_v = MAX(max_v, sol[i][0] + sol[i][1] - 1);
	}
	cout << max_v;
	return 0;
}