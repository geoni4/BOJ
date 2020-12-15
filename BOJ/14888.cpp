// N���� ���� �̷���� ���� A1, A2, ..., AN�� �־�����.
// ���� �� ���̿� �������� �� �ִ� N-1���� �����ڰ� �־�����.
// �����ڴ� ����(+), ����(-), ����(��), ������(��)���θ� �̷���� �ִ�.
// ���� ����� ������ �켱 ������ �����ϰ� �տ������� �����ؾ� �Ѵ�.
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