#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

using namespace std;

int main() {
	int test_case, N, K, ret;
	int sig[100], tmp;
	freopen("imtest.txt", "r", stdin);
	scanf("%d", &test_case);
	for (int tc = 1; tc <= test_case; tc++) {
		scanf("%d %d", &N, &K);
		for (int i = 0; i < N; i++)
			scanf("%d", &sig[i]);
		int j = 0, cnt = 0;
		ret = 0;
		for (int i = 0; i < K; i++) {
			scanf("%d", &tmp);
			while (j < N) {
				if (sig[j] == tmp) {
					cnt++, j++;
					break;
				}
				j++;
			}
			if (cnt == K) {
				ret = 1;
				break;
			}
		}
		printf("#%d %d\n", tc, ret);
	}
	return 0;
}