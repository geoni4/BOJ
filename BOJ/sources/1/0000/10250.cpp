#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int tc, H, W, N, y, x;
	freopen("10250.txt", "r", stdin);
	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		scanf("%d %d %d", &H, &W, &N);
		y = N % H, x = N / H + 1;
		if (!y) y = H, x--;
		printf("%d%02d\n", y, x);
	}
	return 0;
}