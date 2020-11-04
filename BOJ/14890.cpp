#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;
int map[100][100];

int solve(int n, int l) {
    int cnt=0;
    for (int y = 0; y < n; y++) {
    }
    return cnt;
}



int main() {
    int test_case, N, L;
    freopen("14890.txt", "r", stdin);
    cin >> test_case;
    for (int tc = 1; tc <= test_case; tc++) {
        cin >> N >> L;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> map[i][j];

        

        cout << "#" << tc << " " << solve(N, L) << '\n';
    }
    return 0;
}

