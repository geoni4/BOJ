#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int getGCD(int a, int b) {
	int n;
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	while (1) {
		n = b;
		if (a % n == 0) break;
		b = a % n;
		a = n;
	}
	return n;
}


typedef struct {
	int numerator, denominator;
}fraction;

int main() {
	freopen("./resources/0/1000/1735.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);
	fraction A, B, result;
	cin >> A.numerator >> A.denominator;
	cin >> B.numerator >> B.denominator;

	result.numerator = A.numerator * B.denominator
		+ B.numerator * A.denominator;
	result.denominator = A.denominator * B.denominator;

	int gcd = getGCD(result.numerator, result.denominator);
	result.numerator /= gcd;
	result.denominator /= gcd;
	cout << result.numerator << ' ' << result.denominator;
	return 0;
}


/*

https://www.acmicpc.net/problem/1735

�м� ��
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	128 MB	22167	10349	8865	48.164%
����

�м� A/B�� ���ڰ� A, �и� B�� �м��� �ǹ��Ѵ�. A�� B�� ��� �ڿ������ ����.

�� �м��� �� ���� �м��� ǥ���� �� �ִ�. �� �м��� �־����� ��, �� ���� ���м��� ���·� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���м��� �� �̻� ��е��� �ʴ� �м��� �ǹ��Ѵ�.
�Է�

ù° �ٰ� ��° �ٿ�, �� �м��� ���ڿ� �и� ���ϴ� �� ���� �ڿ����� ������� �־�����. �ԷµǴ� �� �ڿ����� ��� 30,000 �����̴�.
���

ù° �ٿ� ���ϰ��� �ϴ� ���м��� ���ڿ� �и� ���ϴ� �� ���� �ڿ����� �� ĭ�� ���̿� �ΰ� ������� ����Ѵ�.
���� �Է� 1

2 7
3 5

���� ��� 1

31 35

��ó

	������ ���� ���: author5

�˰��� �з�

	����
	������
	��Ŭ���� ȣ����

�޸�

*/