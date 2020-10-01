#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("1316.txt", "r", stdin);
	int N, res=0;
	bool cnt[26];
	char str[100];
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> str;
		for (int i = 0; i < 26; i++)	cnt[i] = 0;
		
		res++;
		for (int i = 0; str[i]; i++) {
			str[i] -= 'a';
			if (i == 0 || str[i] == str[i - 1]) continue;
			if (cnt[str[i]] == 1) {
				res--;
				break;
			}
			cnt[str[i - 1]] = 1;
		}
	}
	cout << res;
	return 0;
}