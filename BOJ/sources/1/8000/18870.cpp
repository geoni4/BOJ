#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <Vector>
using namespace std;

int main() {
	freopen("./resources/1/8000/18870.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<int> numVec;
	vector<int> numVec2;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		numVec.push_back(n);	//����
		numVec2.push_back(n);	//���� ����
	}

	// ����
	sort(numVec2.begin(), numVec2.end());

	//�ߺ��� ���ֱ�
	numVec2.erase(unique(numVec2.begin(), numVec2.end()), numVec2.end());

	
	for (int i = 0; i < numVec.size(); i++) {
		// lower_bound �Լ��� iterator�� ��ȯ�Ѵ�.(������)
		// numVec[i]���� ó�� ������ ��ġ�� numVec2.begin()���� numVec2.end()���� ã�´�.
		// begin() �����͸� ã�Ƽ� ������Ѵ�.
		cout << lower_bound(numVec2.begin(), numVec2.end(), numVec[i]) - numVec2.begin() << ' ';
	}
	cout << '\n';
	return 0;
}


/*

https://www.acmicpc.net/problem/18870

��ǥ ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	512 MB	68308	28715	21909	39.745%
����

������ ���� N���� ��ǥ X1, X2, ..., XN�� �ִ�. �� ��ǥ�� ��ǥ ������ �����Ϸ��� �Ѵ�.

Xi�� ��ǥ ������ ��� X'i�� ���� Xi > Xj�� �����ϴ� ���� �ٸ� ��ǥ Xj�� ������ ���ƾ� �Ѵ�.

X1, X2, ..., XN�� ��ǥ ������ ������ ��� X'1, X'2, ..., X'N�� ����غ���.
�Է�

ù° �ٿ� N�� �־�����.

��° �ٿ��� ���� �� ĭ���� ���е� X1, X2, ..., XN�� �־�����.
���

ù° �ٿ� X'1, X'2, ..., X'N�� ���� �� ĭ���� �����ؼ� ����Ѵ�.
����

	1 �� N �� 1,000,000
	-109 �� Xi �� 109

���� �Է� 1

5
2 4 -10 4 -9

���� ��� 1

2 3 0 3 1

���� �Է� 2

6
1000 999 1000 999 1000 999

���� ��� 2

1 0 1 0 1 0

��ó

	������ ��Ÿ�� ã�� ���: abel1802
	������ ���� ���: baekjoon

�˰��� �з�

	����
	�� / ��ǥ ����

�޸�

*/