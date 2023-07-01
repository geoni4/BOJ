#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("2941.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int cnt = 0;
	char ch, prev = 0, pprev = 0;
	while (cin >> ch) {
		if ((prev == 'c'|| prev=='d') && ch == '-')	cnt--;
		if ((prev == 'c'||prev =='d' || prev =='s' || prev =='z')&&ch == '=') {
			cnt--;
			if(pprev == 'd' && prev=='z') cnt--;
		}
		if ((prev == 'l' || prev == 'n') && ch == 'j') cnt--;
		
		pprev = prev;
		prev = ch;
		cnt++;
	}
	cout << cnt;

	return 0;
}