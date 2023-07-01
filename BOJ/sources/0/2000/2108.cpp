#include <iostream>
#include <cmath>
using namespace std;
int num[10000];

int main() {
	int N, sum=0, min_num = 0, midnum, frq=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		num[tmp + 4000]++;
		if (num[tmp + 4000] >= min_num) min_num = num[tmp + 4000];
	}
	int f_cnt = 0, m_cnt = 0, flag = 0, first =0, last = 0;
	for (int i = 0; i <= 8000; i++) {
		if (num[i] && m_cnt<(N+1)/2) {
			m_cnt+=num[i];
			midnum = i-4000;
		}
		if (num[i] == min_num && f_cnt <2) {
			f_cnt++;
			frq = i-4000;
		}
		if (num[i]) {
			if (!flag) {
				first = i - 4000;
				last = first;
				flag = 1;
			}
			else {
				last = i - 4000;
			}

		}
	}
	cout << round((double)(sum) / (double)(N)) << '\n';
	cout << midnum << '\n';
	cout << frq << '\n';
	cout << last - first << '\n';
	return 0;
}