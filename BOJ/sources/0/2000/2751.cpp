#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int arr[1000001];
int main() {
	int N;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> N;
	
	memset(arr, 0, sizeof(arr));
	for (int n = 0; n < N; n++) {
		cin >> arr[n];
		
	}
	sort(arr, arr + N);
	for (int n = 0; n < N; n++) {
		cout << arr[n] << '\n';
	}
	return 0;
}