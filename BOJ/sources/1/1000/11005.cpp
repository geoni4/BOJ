#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


char translate(int num) {
	if (num >= 10)	return num + 'A' - 10;
	else			return num + '0';
}


int main() {

	freopen("./resources/1/1000/11005.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);

	int num, radix, len=0;
	char chArr[33] = { 0 };
	cin >> num >> radix;

	for (int i = 0; num > 0; i++) {
		chArr[i] = translate(num % radix);
		num = num / radix;
		len++;
	}
	for (int i = len-1; i>=0; i--) {
		cout << chArr[i];
	}


	return 0;
}

/*

https://www.acmicpc.net/problem/11005

���� ��ȯ 2 ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
0.5 �� (�߰� �ð� ����) 	256 MB	24758	12250	10418	49.718%
����

10���� �� N�� �־�����. �� ���� B�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� �ڸ��� �ִ�. �̷� ��쿡�� ������ ���� ���ĺ� �빮�ڸ� ����Ѵ�.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
�Է�

ù° �ٿ� N�� B�� �־�����. (2 �� B �� 36) N�� 10�ﺸ�� �۰ų� ���� �ڿ����̴�.
���

ù° �ٿ� 10���� �� N�� B�������� ����Ѵ�.
���� �Է� 1

60466175 36

���� ��� 1

ZZZZZ

��ó

	������ ���� ���: baekjoon
	�����͸� �߰��� ���: du9172
	������ ��Ÿ�� ã�� ���: zmtn94

�˰��� �з�

	����
	����

�޸�

*/