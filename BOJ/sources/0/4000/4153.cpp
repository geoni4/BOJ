#include <iostream>

using namespace std;

void ASC(int *arr) {
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] >= arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main() {
	int asc[3];
	while (1) {
		cin >> asc[0] >> asc[1] >> asc[2];
		if (!asc[0] && !asc[1] && !asc[2]) break;
		ASC(asc);
		if (asc[0] * asc[0] + asc[1] * asc[1] == asc[2] *asc[2]) cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}
	

	return 0;
}