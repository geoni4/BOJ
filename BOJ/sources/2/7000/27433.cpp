#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

long long factorial(long long n) {
	if (n <= 1) return 1;
	return n*factorial(n - 1);
}


int main() {
	freopen("./resources/2/7000/27433.txt", "r", stdin);
	long long n;
	cin >> n;
	cout << factorial(n);
	return 0;
}


/*

https://www.acmicpc.net/problem/27433

���丮�� 2
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	1024 MB	10661	5116	4684	50.102%
����

0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� N(0 �� N �� 20)�� �־�����.
���

ù° �ٿ� N!�� ����Ѵ�.
���� �Է� 1

10

���� ��� 1

3628800

���� �Է� 2

0

���� ��� 2

1

�˰����� �з�

	����
	��Ģ����

�޸�

*/