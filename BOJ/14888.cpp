// N개의 수로 이루어진 수열 A1, A2, ..., AN이 주어진다.
// 수와 수 사이에 끼워넣을 수 있는 N-1개의 연산자가 주어진다.
// 연산자는 덧셈(+), 뺄셈(-), 곱셈(×), 나눗셈(÷)으로만 이루어져 있다.
// 식의 계산은 연산자 우선 순위를 무시하고 앞에서부터 진행해야 한다.
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
int n;
int num[11];
int pl, mi, mu, di;
int res_min = 999999999, res_max = -999999999;

void dfs(int k, int a, int b, int c, int d, int ret) {
	if (k == n - 1)
	{
		res_max = res_max < ret ? ret : res_max;
		res_min = res_min > ret ? ret : res_min;
		return;
	}
	if (a + 1 <= pl)
		dfs(k + 1, a + 1, b, c, d, ret + num[k + 1]);
	if (b + 1 <= mi)
		dfs(k + 1, a, b + 1, c, d, ret - num[k + 1]);
	if (c + 1 <= mu)
		dfs(k + 1, a, b, c + 1, d, ret * num[k + 1]);
	if (d + 1 <= di)
		dfs(k + 1, a, b, c, d + 1, ret / num[k + 1]);
}

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	cin >> pl >> mi >> mu >> di;
	dfs(0, 0, 0, 0, 0, num[0]);
	cout << res_max << '\n' << res_min;
	return 0;
}