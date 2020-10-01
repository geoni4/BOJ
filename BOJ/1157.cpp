#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("1157.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	char ch;
	int str[1000000];
	int max_num[3] = { 0, 0, 0 };
	int cnt[26];
	for (int i = 0; i < 26; i++)
		cnt[i] = 0;
	while (1) {
		cin >> ch;
		if (cin.eof()) break;
		if (ch >= 'a' && ch <= 'z') ch -= 32;
		cnt[ch-'A']++;
		if (max_num[0] == cnt[ch - 'A']) max_num[0] = cnt[ch - 'A'], max_num[1]++;
		else if (max_num[0] < cnt[ch - 'A']) max_num[0] = cnt[ch - 'A'], max_num[1] = 1, max_num[2] = ch;
	}
	if (max_num[1] > 1) cout << "?";
	else cout << (char)max_num[2];

	return 0;
}