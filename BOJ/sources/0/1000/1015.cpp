#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {

	freopen("./resources/0/1000/1015.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
	pair<int, int> p;
	deque<int> d_arr, d_arr_sort;
	int N;
	cin >> N;
	for (int n = 0; n < N; n++) {
		int tmp; cin >> tmp;
		d_arr.push_back(tmp);
	}
	d_arr_sort = d_arr;
	sort(d_arr_sort.begin(), d_arr_sort.end());
	for(int i =0;i<d_arr_sort.size();i++){
		cout << d_arr_sort[i] << '\n';
	}
	return 0;
}