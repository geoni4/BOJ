#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
typedef unsigned int uint32_t;

int main() {
	uint32_t tc, x, y, res, ans=0;
	freopen("1011.txt", "r", stdin);
	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		scanf("%d %d", &x, &y);
		res = y - x;
		uint32_t i = (uint32_t)sqrt(res);
		if (i * i < res) i++;
		if (res <= (i * i + (i - 1) * (i - 1)) / 2) ans = i * 2 - 2;
		else ans = i * 2 - 1;
		
		printf("%d\n", ans);
	}
	return 0;
}