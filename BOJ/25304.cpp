#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("25304.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int X;
	int N;
	int a, b;
	int sum = 0;
	string result = "No";
	cin >> X >> N;

	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	if (X == sum) result = "Yes";

	cout << result << '\n';
	return 0;
}