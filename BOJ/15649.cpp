#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int num_arr[10];
int visited[10];
void permu(int n, int k, int r) {
	if (k == r) {
		for (int i = 0; i < k; i++) {
			printf("%d ", num_arr[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		num_arr[k] = i;
		if (visited[i]) continue;
		visited[i] = 1;
		permu(n, k + 1, r);
		visited[i] = 0;
	}
}


int main() {
	int n, k, r;
	scanf("%d %d", &n, &r);

	permu(n, 0, r);

	return 0;
}