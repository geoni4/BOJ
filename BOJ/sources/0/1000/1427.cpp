#include <iostream>

using namespace std;

char str[11];
int dat[10];
int main() {
	
	cin >> str;
	for (int i = 0; str[i]; i++) {
		dat[str[i] - '0']++;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < dat[i]; j++) {
			cout << i;
		}
	}

	return 0;
}