#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int main() {
	int test_case, N, M, solution[100];
	int exam[100], sum, cnt, tmp, s_max, s_min;
	freopen("test.txt", "r", stdin);
	cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++) {
		cin >> N >> M;
		for (int i = 0; i < M; i++)
			cin >> solution[i];

		s_max = 0, s_min = 10000;
		
		for (int i = 0; i < N; i++) {
			tmp = 0;
			cnt = 0;
			for (int j = 0; j < M; j++) {
				cin >> exam[j];
			}
			for (int j = 0; j < M; j++) {
				if (solution[j] == exam[j]) cnt++;
				else cnt = 0;
				tmp += cnt;
			}
			if (s_max <= tmp) s_max = tmp;
			if (s_min >= tmp) s_min = tmp;
		}
		cout << "#" << tc << " " << s_max - s_min << endl;
	}
	return 0;
}