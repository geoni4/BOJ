#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/0/9000/9086.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);

	int test_case;
	cin >> test_case;
	string str;
	for (int i = 0; i < test_case; i++) {
		cin >> str;
		cout << str.at(0) << str.at(str.length()-1) << '\n';
	}


	return 0;
}

/*

https://www.acmicpc.net/problem/9086

���ڿ�
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	34267	22939	21192	67.951%
����

���ڿ��� �Է����� �ָ� ���ڿ��� ù ���ڿ� ������ ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T(1 �� T �� 10)�� �־�����. �� �׽�Ʈ ���̽��� �� �ٿ� �ϳ��� ���ڿ��� �־�����. ���ڿ��� ���ĺ� A~Z �빮�ڷ� �̷������ ���ĺ� ���̿� ������ ������ ���ڿ��� ���̴� 1000���� �۴�.
���

�� �׽�Ʈ ���̽��� ���ؼ� �־��� ���ڿ��� ù ���ڿ� ������ ���ڸ� �����Ͽ� ����Ѵ�.
���� �Է� 1

3
ACDKJFOWIEGHE
O
AB

���� ��� 1

AE
OO
AB

��ó

ICPC > Regionals > Asia Pacific > Korea > Nationwide Internet Competition > Seoul Nationalwide Internet Competition 2003 PB��

	������ ������ ���: baekjoon

�˰��� �з�

����
�޸�


*/