#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	int n, tmp, prev, g;
	cin >> n;
	vector<int> map;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		map.push_back(tmp);
	}
	sort(map.begin(), map.end());
	g = map[1] - map[0];
	for (int i = 1; i < n - 1; i++) {
		g = gcd(g, map[i + 1] - map[i]);
	}
	vector<int> ans;
	for (int i = 1; i * i <= g; i++) {
		if (!(g % i)) {
			ans.push_back(i);
			if (i != g / i) ans.push_back(g / i);
		}
	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++) {
		if(ans[i]!=1) cout << ans[i] << ' ';
	}
	return 0;
}