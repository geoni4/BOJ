#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;



typedef struct _STRING {
	int len;
	char str[55];
}STRING;
STRING str[20000];
bool cmp(STRING a, STRING b)
{
	if (a.len == b.len) {
		for (int i = 0; i < a.len; i++) {
			if (a.str[i] < b.str[i]) return 1;
			if (a.str[i] > b.str[i]) return 0;
		}
	}
	return a.len < b.len;
}

int main() {
	freopen("1181.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str[i].str;
		str[i].len = strlen(str[i].str);
	}
	
	sort(str, str + n, cmp);

	for (int i = 0; i < n; i++) {
		if (i != 0) {
			if (!strcmp(str[i].str, str[i - 1].str)) continue;
		}
		cout << str[i].str << '\n';
	}
	return 0;
}