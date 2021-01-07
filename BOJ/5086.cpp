#include <iostream>

using namespace std;

char answer[3][10] = { "factor", "multiple", "neither" };

int main() {
	int on, tw;
	while (1) {
		cin >> on >> tw;
		if (!on && !tw) break;

		if (tw / on != 0 && tw % on == 0) cout << answer[0] << '\n';
		else if (on / tw != 0 && on % tw == 0) cout << answer[1] << '\n';
		else cout << answer[2] << '\n';
	}
	return 0;
}