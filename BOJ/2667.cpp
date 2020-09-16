#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

typedef int STACK;
char map[30][30];
bool visited[30][30];

STACK arrX[1000], arrY[1000];
int top = -1;
int cplx_cnt = 0;
STACK arr[1000];
int arr_top = -1;
bool valid_check(int x, int y, int n) {
    if (x < 0 || x >= n) return false;
    if (y < 0 || y >= n) return false;
    if (map[x][y] == '0') return false;
    if (visited[x][y]) return false;
    else return true;
}


void DFS(int x, int y, int n) {
    int vertex;
    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { 1, 0, -1, 0 };
    arrX[++top] = x, arrY[top] = y;
    
    while (top != -1) {
        x = arrX[top], y = arrY[top--];
        if (!visited[x][y]) {
            visited[x][y] = 1;
            
            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i], newY = y + dy[i];
                if (valid_check(newX, newY, n)) {
                    cplx_cnt++;
                    DFS(newX, newY, n);
                }
            }
        }
    }
}

int solve(int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && map[i][j] == '1') {
                cplx_cnt = 1;
                DFS(i, j, n);
                cnt++;
                arr[++arr_top] = cplx_cnt;
            }
        }
    }
    for (int i = 0; i <= arr_top-1; ++i) {
        for (int j = i + 1; j <= arr_top; ++j) {
            if (arr[j] < arr[i]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    return cnt;
}

int main() {
    int N, k;
    freopen("2667.txt", "r", stdin);
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
        }
    }
    cout << solve(N) << endl;
    for (int i = 0; i <= arr_top;++i) {
        cout << arr[i] << endl;
    }
    return 0;
}
