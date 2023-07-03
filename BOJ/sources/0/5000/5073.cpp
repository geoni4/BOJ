#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


string kinds(int d_one, int d_two, int d_three) {
	string str = "Invalid";
	int max_len = d_one;
	max_len = max_len > d_two ? max_len : d_two;
	max_len = max_len > d_three ? max_len : d_three;
	int valid =  d_one + d_two + d_three - max_len*2;
	if (valid <=0) return str;
	int cnt = 0;
	if (d_one == d_two && d_two == d_three) {
		cnt = 3;
	}
	else if (d_one == d_two || d_two == d_three || d_three == d_one) {
		cnt = 2;
	}

	if (cnt == 0) {
		str = "Scalene";
	}
	else if (cnt == 2) {
		str = "Isosceles";
	}
	else if (cnt == 3) {
		str = "Equilateral";
	}
	return str;
}

int main() {
	freopen("./resources/0/5000/5073.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	while (1) {
		int d_one, d_two, d_three;
		cin >> d_one >> d_two >> d_three;
		if (d_one == 0 && d_two == 0 && d_two == 0) break;	
		cout << kinds(d_one, d_two, d_three) << '\n';

	}
	return 0;
}


/*

https://www.acmicpc.net/problem/5073

�ﰢ���� �� �� �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	14553	7194	6650	50.888%
����

�ﰢ���� �� ���� ���̰� �־��� �� ���� ���̿� ���� ������ ���� �����Ѵ�.

	Equilateral :  �� ���� ���̰� ��� ���� ���
	Isosceles : �� ���� ���̸� ���� ���
	Scalene : �� ���� ���̰� ��� �ٸ� ���

�� �־��� �� ���� ���̰� �ﰢ���� ������ �������� ���ϴ� ��쿡�� "Invalid" �� ����Ѵ�. ���� ��� 6, 3, 2�� �� ��쿡 �ش��Ѵ�. ���� �� ���� ���̺��� ������ �� ���� ������ ���� ���� ������ �ﰢ���� ������ �������� ���Ѵ�.

�� ���� ���̰� �־��� �� �� ���ǿ� ���� ����� ����Ͻÿ�.
�Է�

�� �ٿ��� 1,000�� ���� �ʴ� ���� ���� 3���� �Էµȴ�. ������ ���� 0 0 0�̸� �� ���� ������� �ʴ´�.
���

�� �Է¿� �´� ��� (Equilateral, Isosceles, Scalene, Invalid) �� ����Ͻÿ�.
���� �Է� 1

7 7 7
6 5 4
3 2 5
6 2 6
0 0 0

���� ��� 1

Equilateral
Scalene
Invalid
Isosceles

��ó

ICPC > Regionals > South Pacific > South Pacific Region > New Zealand Programming Contest > NZPC 2012 B��

	������ ��Ÿ�� ã�� ���: corea, lety
	�߸��� ������ ã�� ���: jh05013
	������ ������ ���: john6014
	�߸��� �����͸� ã�� ���: kookmin20103324

�˰��� �з�

	����
	����
	������

�޸�



*/