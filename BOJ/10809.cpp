#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL), ios::sync_with_stdio(false);
	char ch[100];
	int cnt[26];
	for (int i = 0; i < 26; i++)
		cnt[i] = -1;
	freopen("10809.txt", "r", stdin);
	cin >> ch;
	for (int i = 0; ch[i]; i++)
		if(cnt[ch[i]-'a'] == -1) cnt[ch[i]-'a'] = i;

	for (int i = 0; i < 26; i++)
		cout << cnt[i] << " ";
	return 0;
}