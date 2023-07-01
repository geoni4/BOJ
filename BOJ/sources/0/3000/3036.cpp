#include <iostream>
#include <vector>

using namespace std;
int gcd(int a, int b) {
	return !b ? a : gcd(b, a % b);
}
int main() {
	int n;
	vector<int> map;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		map.push_back(tmp);
	}
	for (int i = 1; i < map.size(); i++) {
		int g = gcd(map[0], map[i]);
		cout << map[0] / g << '/' << map[i] / g << '\n';
	}
	return 0;
}