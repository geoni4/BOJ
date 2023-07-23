#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/1/5000/15439.txt", "r", stdin);
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N;
	cin >> N;
	cout << N * (N - 1);

	return 0;
}

/*

https://www.acmicpc.net/problem/15439

������ �м� �����ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	256 MB	7539	6613	6337	88.100%
����

����� ���� N ���� ���� N ���� �ִ�. i ��° ���ǿ� i ��° ���Ǵ� ��� ���� i�� ������. N ���� ������ ��� ���� �ٸ���.

���ǿ� ���ǰ� ���� �ٸ� ������ ������ �� �� �����ϱ�?
�Է�

�Է��� �Ʒ��� ���� �־�����.

N

���

���ǿ� ���ǰ� ���� �ٸ� ������ ������ �������� ����Ѵ�.
����

	1 �� N �� 2017
	N�� �����̴�.

���� �Է� 1

1

���� ��� 1

0

���� �Է� 2

2

���� ��� 2

2

���� �Է� 3

5

���� ��� 3

20

��ó

Contest > Waterloo's local Programming Contests > 4 March, 2017 A��

	������ ������ ���: kiwiyou

�˰��� �з�

	����
	����
	���շ�

�޸�

*/