#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int main() {
	cin.tie(NULL), ios::sync_with_stdio(false);

	freopen("11382.txt", "r", stdin);

	long long A, B, C;

	cin >> A >> B >> C;

	cout << (long long)(A + B + C) << '\n';


	return 0;
}
