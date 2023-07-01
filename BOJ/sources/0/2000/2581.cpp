#include <iostream>
using namespace std;

int main() {
	int N, M, comp_num, sum = 0, n =0;
	bool num[10001] = { 0, };
	num[0] = num[1] = 1;
	for (int i = 2; i <= 5000; i++) {
		for (int j = 2; j <= 5000; j++) {
			comp_num = i * j;
			if (comp_num > 10000) break;
			if (num[comp_num]) continue;
			num[comp_num] = 1;
		}
	}
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (!num[i]) sum+=i;
		if (!n) n = sum;
	}
	if (!sum)	cout << -1;
	else		cout << sum << '\n' << n;
	return 0;
}