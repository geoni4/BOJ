#include <iostream>
using namespace std;
typedef long long ll;
ll arr[10];

int main() {
	int num, k;
	cin >> num;
	for (int n = 0; n < num; n++) {
		cin >> k;
		arr[0] = 1, arr[1] = 1, arr[2] = 1, arr[3] = 2, arr[4] = 2;
		for (int i = 5; i < k; i++) arr[i % 6] = arr[(i - 1) % 6] + arr[(i - 5) % 6];
		cout << arr[(k-1) % 6] << '\n';
	}
	return 0;
}