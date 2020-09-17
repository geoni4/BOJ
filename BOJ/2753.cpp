#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int y, test_case;
	freopen("2753.txt", "r", stdin);
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> y;
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) 
			cout << "1" << endl;
		else 
			cout << "0" << endl;
	}
	return 0;
}