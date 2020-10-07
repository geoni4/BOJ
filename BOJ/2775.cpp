#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

int main() {
	int tc, k, n, arr[15][14];
	for (int i = 0; i <= 14; i++) {
		if (i == 0) for (int j = 0; j < 14; j++) arr[0][j] = j + 1;
		else for (int j = 0; j < 14; j++) {
			if (j == 0) arr[i][j] = 1;
			else arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	freopen("2775.txt", "r", stdin);
	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n-1]);
	}
	return 0;
}