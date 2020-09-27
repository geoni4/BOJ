#include <iostream>

using namespace std;

void selfNumber() {
	int a[10000] = { 0, };
	for (int i = 1; i <= 10000; i++) {
		int tmp = i;
		int ans = tmp;
		while (1) {
			ans += tmp % 10;
			tmp = tmp / 10;
			if (tmp == 0) break;
		}
		if (ans > 10000) continue;
			a[ans - 1] = 1;
	}
	for (int i = 0; i < 10000; i++)
		if (!a[i]) cout << i+1 << '\n';

}

int main() {
	selfNumber();

	return 0;
}