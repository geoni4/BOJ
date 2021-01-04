#include <iostream>
#include <cstring>
#define MAX(A, B) (A) > (B) ? (A) : (B)
using namespace std;

char A[1002],B[1002];
int map[1002][1002];

int main() {
	char tmp[1002];
	A[0] = '0', B[0] = '1';
	cin >> tmp;
	for (int i = 0; tmp[i]; i++) {
		A[i + 1] = tmp[i];
	}
	cin >> tmp;
	for (int i = 0; tmp[i]; i++) {
		B[i + 1] = tmp[i];
	}
	int lenA = strlen(A), lenB = strlen(B);
	for (int i = 0; i < lenA; i++) {
		for (int j = 1; j < lenB; j++) {
			if (i == 0) {
				map[i][j] = 0;
				continue;
			}
			if (A[i] == B[j]) {
				map[i][j] = MAX(map[i - 1][j - 1] + 1, map[i][j - 1]);
			}
			else map[i][j] = MAX(map[i-1][j], map[i][j - 1]);
		}
	}
	cout << map[lenA - 1][lenB - 1];

	return 0;
}