#include <iostream>

using namespace std;

typedef long long ll;
int dist[100000];
ll sum, dist_sum;

int main() {
	int n, tmp, prev = 1234567890;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n - 1; i++) cin >> dist[i];
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (i != 0)	dist_sum += dist[i-1];
		if (prev > tmp || i == n-1) {
			sum += prev * dist_sum;
			prev = tmp;
			dist_sum = 0;
		}
	}
	cout << sum;

	return 0;
}