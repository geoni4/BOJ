#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct _point {
	int x, y;
}point;
point v[200001];
bool cmp(point a, point b)
{
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main()
{
	freopen("11651.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i].x >> v[i].y;
	sort(v, v + n, cmp);
	for (int i = 0; i < n; i++)
		cout << v[i].x << " " << v[i].y << '\n';
	return 0;
}