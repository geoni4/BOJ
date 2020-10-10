#include <iostream>
using namespace std;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int N, M, comp_num;
	bool num[1000001] = { 0, };
	num[0] = num[1] = 1;
	for (int i = 2; i <= 500000; i++) {
		for (int j = 2; j <= 500000; j++) {
			comp_num = i * j;
			if (comp_num > 1000000) break;
			if (num[comp_num]) continue;
			num[comp_num] = 1;
		}
	}
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (!num[i]) cout << i << '\n';
	}
	return 0;
}