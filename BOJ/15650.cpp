#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int num_arr[10];
int visited[10];
void combi(int n, int k, int r, int m) {
	if (k == r) {
		for (int i = 0; i < r; i++) {
			printf("%d ", num_arr[i]);
		}
		printf("\n");
		return;
	}
	for (int i = m+1; i <= n; i++) {
		num_arr[k] = i;
		if (visited[i]) continue;
		visited[i] = 1;
		combi(n, k+1, r, i);
		visited[i] = 0;
	}
}


int main() {
	int n, k, r;
	scanf("%d %d", &n, &r);

	combi(n, 0, r,0);

	return 0;
}