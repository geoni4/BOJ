#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/0/2000/2231.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int N, sum, k, answer=0;
	cin >> N;
	for (int n = 1; n <= N; n++) {
		k = n;
		sum = k;
		while (1) {
			if (k % 10) sum += k % 10;
			if (k == 0) break;
			k /= 10;
		}
		if (sum == N) {
			answer = n;
			break;
		}
	}
	cout << answer;
	return 0;
}


/*

https://www.acmicpc.net/problem/2231

������ ���дٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	192 MB	126955	58501	45993	45.357%
����

� �ڿ��� N�� ���� ��, �� �ڿ��� N�� �������� N�� N�� �̷�� �� �ڸ����� ���� �ǹ��Ѵ�. � �ڿ��� M�� �������� N�� ���, M�� N�� �����ڶ� �Ѵ�. ���� ���, 245�� �������� 256(=245+2+4+5)�� �ȴ�. ���� 245�� 256�� �����ڰ� �ȴ�. ����, � �ڿ����� ��쿡�� �����ڰ� ���� ���� �ִ�. �ݴ��, �����ڰ� ���� ���� �ڿ����� ���� �� �ִ�.

�ڿ��� N�� �־����� ��, N�� ���� ���� �����ڸ� ���س��� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �ڿ��� N(1 �� N �� 1,000,000)�� �־�����.
���

ù° �ٿ� ���� ����Ѵ�. �����ڰ� ���� ��쿡�� 0�� ����Ѵ�.
���� �Է� 1

216

���� ��� 1

198

��ó

ICPC > Regionals > Asia Pacific > Korea > Asia Regional - Seoul 2005 B��

	�����͸� �߰��� ���: kimtree97, lambda, minju1307, yjwr0528

�˰��� �з�

	���Ʈ���� �˰���

�޸�

*/