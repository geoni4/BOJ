#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("10807.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);

	int N;
	cin >> N;

	int numArr[100];
	int search;
	int count = 0;
	for (int i = 0; i < N; i++)
		cin >> numArr[i];
	cin >> search;
	for (int i = 0; i < N; i++)
		if(numArr[i] == search)	count++;

	cout << count << '\n';
	return 0;
}