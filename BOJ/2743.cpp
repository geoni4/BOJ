#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	freopen("2743.txt", "r", stdin);

	string str;
	cin >> str;
	cout << str.length() <<'\n';

	return 0;
}

/*

https://www.acmicpc.net/problem/2743

�ܾ� ���� ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	46133	37178	33747	81.912%
����

���ĺ����θ� �̷���� �ܾ �Է¹޾�, �� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ �־�����. �ܾ��� ���̴� �ִ� 100�̴�.
���

ù° �ٿ� �Է����� �־��� �ܾ��� ���̸� ����Ѵ�.
���� �Է� 1

pulljima

���� ��� 1

8

��ó

	�����͸� �߰��� ���: 79brue
	������ ���� ���: baekjoon

�˰��� �з�

	����
	���ڿ�

�޸�

*/