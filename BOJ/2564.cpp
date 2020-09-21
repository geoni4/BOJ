#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MIN(A, B) A <= B ? A : B

using namespace std;

//store[?][2] --> [?][0] = x, [?][1] = y;
int store[101][2];

int main() {
	freopen("2564.txt", "r", stdin);
	int width, height, N, direction, dist, sum = 0;
	cin >> width >> height;
	cin >> N;
	for (int i = 0; i <= N; i++) {
		cin >> direction >> dist;
		if (direction == 1) {
			store[i][0] = dist;
			store[i][1] = height;
		}
		else if (direction == 2) {
			store[i][0] = dist;
			store[i][1] = 0;
		}
		else if (direction == 3) {
			store[i][0] = 0;
			store[i][1] = height - dist;
		}
		else if (direction == 4) {
			store[i][0] = width;
			store[i][1] = height - dist;
		}
	}
	//store[N] -> 동근이의 좌표
	//
	for (int i = 0; i < N; i++) {
		if (abs(store[N][0] - store[i][0]) == width) {
			sum += width;
			sum += MIN(store[N][1] + store[i][1], height * 2 - store[N][1] - store[i][1]);
		}
		else if (abs(store[N][1] - store[i][1]) == height) {
			sum += height;
			sum += MIN(store[N][0] + store[i][0], width * 2 - store[N][0] - store[i][0]);
		}
		else {
			sum += abs(store[N][0] - store[i][0]) + abs(store[N][1] - store[i][1]);
		}
	}
	
	cout << sum;
	return 0;
}