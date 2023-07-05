#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	freopen("./resources/0/7000/7785.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);
	vector<string> clock_punch;
	string menu, str;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		str = "", menu = "";
		cin >> str >> menu;
		if (menu == "enter") {
			clock_punch.push_back(str);
		}
		else if (menu == "leave") {
			clock_punch.;
		}
	}
	sort(clock_punch.begin(), clock_punch.end(),greater<string>());
	for (auto& i : clock_punch)
		cout << i << " ";
	return 0;
	
}