#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
#define A 'A'
#define B 'B'
#define D 'D'

int main() {
	int N, a_num[6] = { 0, }, b_num[6] = { 0, };
	char ans;
	int a, b, tmp;
	freopen("14696.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	cin >> N ;
	for (int n = 0; n < N; n++) {
		for(int i =0; i<6;i++)
			a_num[i] = 0, b_num[i] = 0;

		cin >> a;
		for (int i = 0; i < a; i++) {
			cin >> tmp;
			a_num[tmp]++;
		}
		cin >> b;
		for (int i = 0; i < b; i++) {
			cin >> tmp;
			b_num[tmp]++;
		}
		for (int i = 4; i > 0; --i) {
			if (a_num[i] > b_num[i]) {
				ans = A;
				break;
			}
			else if (a_num[i] < b_num[i]) {
				ans = B;
				break;
			}
			else ans = D;
		}
		cout<< ans << '\n';
	}


	return 0;
}