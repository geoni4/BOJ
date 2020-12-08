#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int DAT[10001], N;
	cin.tie(0), ios::sync_with_stdio(0);
	memset(DAT, 0, sizeof(DAT));
	cin >> N;
	for (int n = 0; n < N; n++) {
		int tmp;
		cin >> tmp;
		DAT[tmp]++;
	}
	int cnt = 0;
	for (int i = 0; ; i++) {
		if (DAT[i]) {
			for (int j = 0; j < DAT[i]; j++) {
				cout << i << '\n';
				cnt++;
			}
		}
		if (cnt >= N) break;
	}
	return 0;
}