#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("2675.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int N, len;
	char str[20];
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> len >> str;
		for (int i = 0; str[i]; i++)
			for(int j=0;j<len;j++)
				cout << str[i];
		cout << '\n';
	}
	
	return 0;
}