#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("25314.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N / 4; i++)
		cout << "long ";
	cout << "int" << '\n';
}