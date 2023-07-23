#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	int tmp, n;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}


int main() {
	freopen("./resources/1/3000/13241.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);
    long long A, B, GCF, LCM;
    cin >> A >> B;
	GCF = gcd(A, B);
	LCM = A * B / GCF;
	cout << LCM << '\n';
	return 0;
}

/*

https://www.acmicpc.net/problem/13241

�ּҰ���� �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	512 MB	10976	6870	6357	63.864%
����

���� B�� 0���� ū ������ N�� ���� ���� A�� ���� �� �ִٸ�, A�� B�� ����̴�.

��:

    10�� 5�� ����̴� (5*2 = 10)
    10�� 10�� ����̴�(10*1 = 10)
    6�� 1�� ����̴�(1*6 = 6)
    20�� 1, 2, 4,5,10,20�� ����̴�.

�ٸ� ��:

    2�� 5�� �ּҰ������ 10�̰�, �� ������ 2�� 5���� ���� ������� ���� �����̴�.
    10�� 20�� �ּҰ������ 20�̴�.
    5�� 3�� �ּҰ������ 15�̴�.

����� �� ���� ���Ͽ� �ּҰ������ ���ϴ� ���α׷��� �ۼ� �ϴ� ���� ��ǥ�̴�.
�Է�

�� �ٿ� �� ���� A�� B�� �������� �и��Ǿ� �־�����.

50%�� �Է� �� A�� B�� 1000(103)���� �۴�. �ٸ� 50%�� �Է��� 1000���� ũ�� 100000000(108)���� �۴�.

�߰�: ū �� �Է¿� ���Ͽ� ������ 64��Ʈ ������ �����Ͻÿ�. C/C++������ long long int�� ����ϰ�, Java������ long�� ����Ͻÿ�.
���

A�� B�� �ּҰ������ �� �ٿ� ����Ѵ�.
���� �Է� 1

1 1

���� ��� 1

1

���� �Է� 2

3 5

���� ��� 2

15

���� �Է� 3

1 123

���� ��� 3

123

���� �Է� 4

121 199

���� ��� 4

24079

��ó

Olympiad > All-Ireland Programming Olympiad > 2016 AIPO National Finals 2��

    ������ ������ ���: n_agi
    ����� ǥ���� ã�� ���: win198978

�˰����� �з�

    ����
    ������
    ��Ŭ���� ȣ����

�޸�


*/