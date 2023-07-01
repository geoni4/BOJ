#include <iostream>

using namespace std;

int main() {
	int n, smlst=0, bgst=0, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (i == 0) smlst = tmp, bgst = tmp;
		else {
			if (smlst > tmp) smlst = tmp;
			if (bgst < tmp) bgst = tmp;
		}
	}
	int ans = smlst * bgst;
	cout << ans;
	return 0;
}