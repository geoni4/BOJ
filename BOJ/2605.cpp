#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

void swap(int a, int b, int arr[][2]) {
	int tmp = arr[a][0];
	arr[a][0] = arr[b][0];
	arr[b][0] = tmp;
}

int main() {
	int row[100][2],N;
	freopen("2605.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; ++i) {
		row[i][0] = i;
		cin >> row[i][1];
		if (row[i][1])
			for (int j = i, cnt = 0; cnt < row[i][1]; --j, cnt++)
				swap(j, j - 1, row);
	}
	for (int i = 0; i < N; ++i)
		cout << row[i][0]+1 << " ";

	return 0;
}