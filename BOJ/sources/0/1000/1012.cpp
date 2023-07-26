#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
using namespace std;

typedef pair<int, int> pint;

pint locations[4] = {
			make_pair(1, 0),
			make_pair(0, 1),
			make_pair(-1, 0),
			make_pair(0, -1)
		};

bool canTrack(pint** map, int row, int col, int rows, int cols) {
	if (row >= 0 && row < rows && col >= 0 && col < cols) {
		if (map[row][col].first == 1 && map[row][col].second == 0)
			return 1;
	}
	return 0;
}


int tracking(pint** map, int row, int col, int rows, int cols) {
	pint tmp;
	for(int i =0;i<4;i++){
		tmp.first = row + locations[i].first;
		tmp.second = col + locations[i].second;
		if (canTrack(map, tmp.first, tmp.second, rows, cols) ){
			map[tmp.first][tmp.second].second = 1;
			tracking(map, tmp.first, tmp.second, rows, cols);
		}
	}
	return 1;
}


int cata(pint** map, int rows, int cols) {
	int cnt = 0;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			if (canTrack(map, r, c, rows, cols)) {
				cnt += tracking(map, r, c, rows, cols);
			}
		}
	}
	return cnt;
}


int main() {
	freopen("./resources/0/1000/1012.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
	pint p;
	pint** farm;
	int test_case;
	cin >> test_case;
	for (int t = 0; t < test_case; t++) {
		int cols, rows, nums, result;
		cin >> cols >> rows >> nums;
		farm = new pint*[rows];
		for (int i = 0; i < rows; i++)
			farm[i] = new pint[cols];
		for (int i = 0; i < rows; i++)
			memset(farm[i], 0, sizeof(p)*cols);

		for (int i = 0; i < nums; i++) {
			int row, col;
			cin >> col >> row;
			farm[row][col].first = 1;
		}
		result = cata(farm, rows, cols);
		cout << result << '\n';
	}
	return 0;
}

/*

https://www.acmicpc.net/problem/1012

����� ���� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	512 MB	155327	62022	41584	37.802%
����

������ ������ �ѳ��� ������ �������� ����� ���߸� ����ϱ�� �Ͽ���. ����� ���� �ʰ� ���߸� ����Ϸ��� ���߸� �������κ��� ��ȣ�ϴ� ���� �߿��ϱ� ������, �ѳ��� ���� ������ ȿ������ �����������̸� �����ϱ�� ����Ѵ�. �� �����̴� ���߱�ó�� �����ϸ� ������ ��� �������ν� ���߸� ��ȣ�Ѵ�. Ư��, � ���߿� �����������̰� �� ������ ��� ������ �� �����̴� ������ �ٸ� ���߷� �̵��� �� �־�, �� ���ߵ� ���� �������κ��� ��ȣ���� �� �ִ�. �� ������ �����¿� �� ���⿡ �ٸ� ���߰� ��ġ�� ��쿡 ���� �������ִ� ���̴�.

�ѳ��� ���߸� ����ϴ� ���� ���� ���ؼ� ���߸� �������� �ɾ� ���Ҵ�. ���ߵ��� ���ִ� ������ �����������̰� �� ������ ������ �ǹǷ� ���� �������ִ� ���ߵ��� �� ������ �����ִ��� �����ϸ� �� �� ������ �����̰� �ʿ����� �� �� �ִ�. ���� ��� ���߹��� �Ʒ��� ���� �����Ǿ� ������ �ּ� 5������ �����������̰� �ʿ��ϴ�. 0�� ���߰� �ɾ��� ���� ���� ���̰�, 1�� ���߰� �ɾ��� �ִ� ���� ��Ÿ����.
1 	1 	0 	0 	0 	0 	0 	0 	0 	0
0 	1 	0 	0 	0 	0 	0 	0 	0 	0
0 	0 	0 	0 	1 	0 	0 	0 	0 	0
0 	0 	0 	0 	1 	0 	0 	0 	0 	0
0 	0 	1 	1 	0 	0 	0 	1 	1 	1
0 	0 	0 	0 	1 	0 	0 	1 	1 	1
�Է�

�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����. �� ���� �ٺ��� ������ �׽�Ʈ ���̽��� ���� ù° �ٿ��� ���߸� ���� ���߹��� ���α��� M(1 �� M �� 50)�� ���α��� N(1 �� N �� 50), �׸��� ���߰� �ɾ��� �ִ� ��ġ�� ���� K(1 �� K �� 2500)�� �־�����. �� ���� K�ٿ��� ������ ��ġ X(0 �� X �� M-1), Y(0 �� Y �� N-1)�� �־�����. �� ������ ��ġ�� ���� ���� ����.
���

�� �׽�Ʈ ���̽��� ���� �ʿ��� �ּ��� ������������ ���� ���� ����Ѵ�.
���� �Է� 1

2
10 8 17
0 0
1 0
1 1
4 2
4 3
4 5
2 4
3 4
7 4
8 4
9 4
7 5
8 5
9 5
7 6
8 6
9 6
10 10 1
5 5

���� ��� 1

5
1

���� �Է� 2

1
5 3 6
0 2
1 2
2 2
3 2
4 2
4 0

���� ��� 2

2

��ó

	������ ���� ���: author2
	�����͸� �߰��� ���: djm03178
	���� ������ ã�� ���: jinsj1

�˰��� �з�

	�׷��� �̷�
	�׷��� Ž��
	�ʺ� �켱 Ž��
	���� �켱 Ž��

�޸�

*/