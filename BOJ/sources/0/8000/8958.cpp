#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("8958.txt", "r", stdin);
	int test_case, cnt, sum;
	char OX_str[81];
	
	cin >> test_case;
	for (int tc = 0; tc < test_case; ++tc) {
		cin >> OX_str;
		sum = 0;
		cnt = 0;
		for (int i = 0; OX_str[i]; ++i) {
			if (OX_str[i] == 'O')		cnt++;
			else if (OX_str[i] == 'X')	cnt = 0;
			sum += cnt;
		}
		cout << sum << '\n';
	}
	return 0;
}