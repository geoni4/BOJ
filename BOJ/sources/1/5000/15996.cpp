//#include <cstdio>
//
//long long sum(int* a, int n) {
//	long long ans = 0;
//	for (int i = 0; i < n; i++)
//		ans += a[i];
//
//	return ans;
//}


#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
		ans += a[i];

	return ans;
}


int main() {

	return 0;
}

