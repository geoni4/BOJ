#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int score;
	freopen("9498.txt.", "r", stdin);
	cin >> score;
	if (score <= 100 && score >= 90) cout << "A" << endl;
	else if (score < 90 && score >= 80) cout << "B" << endl;
	else if (score < 80 && score >= 70) cout << "C" << endl;
	else if (score < 70 && score >= 60) cout << "D" << endl;
	else cout << "F" << endl;
	return 0;
}