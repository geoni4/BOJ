#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

typedef struct _Human {
	int weight;
	int height;
	int rank;
} Human;



int main() {
	int N;
	freopen("7568.txt", "r", stdin);
	cin >> N;
	Human H[50];
	for (int n = 0; n < N; n++) {
		cin >> H[n].weight >> H[n].height;
		H[n].rank = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (H[i].weight < H[j].weight && H[i].height < H[j].height) H[i].rank++;
		}
	}

	for (int n = 0; n < N; n++)
		cout << H[n].rank << " ";

	return 0;
}