#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/0/2000/2444.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++)	cout << ' ';
		for (int j = 0; j <= i*2; j++)	cout << '*';
		cout << '\n';
	}
	for (int i = n-2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++)	cout << ' ';
		for (int j = 0; j <= i * 2; j++)	cout << '*';
		cout << '\n';
	}




	return 0;
}





/*
�� ��� - 7
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	51945	32628	29245	63.988 %
����

������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.
�Է�

ù° �ٿ� N(1 �� N �� 100)�� �־�����.
���

ù° �ٺ��� 2��N - 1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
���� �Է� 1

5

���� ��� 1

*
***
*****
*******
*********
*******
*****
***
*

��ó

������ ���� ��� : baekjoon

�˰��� �з�

����

�޸�
*/