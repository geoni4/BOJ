#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;
const int MAX = 1000001;
bool prime[MAX] = { 0, };
int main() {
	freopen("./resources/1/7000/17103.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);
	
	int test_case, N;
	
	for (int i = 2; i < MAX; i++) {
		for (int j = 2; i * j < MAX; j++) {
			prime[i * j] = 1;
		}
	}
	cin >> test_case;
	for (int t = 0; t < test_case; t++) {
		cin >> N;
		int cnt = 0;
		for (int i = 2; i <= N / 2; i++) {
			if (!prime[i] && !prime[N - i]) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}


/*

https://www.acmicpc.net/problem/17103

������ ��Ƽ��
�ð� ����	�޸� ����	����	����	���� ���	���� ����
0.5 �� 	512 MB	15308	6025	4567	37.487%
����

	�������� ����: 2���� ū ¦���� �� �Ҽ��� ������ ��Ÿ�� �� �ִ�.

¦�� N�� �� �Ҽ��� ������ ��Ÿ���� ǥ���� ������ ��Ƽ���̶�� �Ѵ�. ¦�� N�� �־����� ��, ������ ��Ƽ���� ������ ���غ���. �� �Ҽ��� ������ �ٸ� ���� ���� ��Ƽ���̴�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ���� T (1 �� T �� 100)�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���� N�� ¦���̰�, 2 < N �� 1,000,000�� �����Ѵ�.
���

������ �׽�Ʈ ���̽����� ������ ��Ƽ���� ���� ����Ѵ�.
���� �Է� 1

5
6
8
10
12
100

���� ��� 1

1
1
2
1
6

��ó

	������ ���� ���: baekjoon
	�����͸� �߰��� ���: djm03178
	������ ��Ÿ�� ã�� ���: jh05013

�˰��� �з�

	����
	������
	�Ҽ� ����
	�����佺�׳׽��� ü

�޸�


*/