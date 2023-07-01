#include <iostream>

using namespace std;
typedef long long ll;
const ll dvd = 1000000000;
ll map[10], sol[10], num;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		map[i] = sol[i] = 1;
		num += 1;
	}
	for (int i = 2; i <= n; i++) {
		num = 0;
		for (int j = 0; j < 10; j++) {
			sol[j] = 0;
			if (j > 0)	sol[j] = (sol[j] + map[j - 1]) % dvd;
			if (j < 9)	sol[j] = (sol[j] + map[j + 1]) % dvd;
			num = (num + sol[j]) % dvd;
		}
		for (int j = 0; j < 10; j++) {
			map[j] = sol[j];
		}
 	}
	cout << num;
	return 0;
}