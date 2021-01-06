#include <iostream>
#include <algorithm>
using namespace std;


int arr[1000];

int main() {
	int n, sum=0, ans=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		ans += sum;
	}
	cout << ans;
	return 0;
}