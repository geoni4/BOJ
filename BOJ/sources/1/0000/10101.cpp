#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


string kinds(int d_one, int d_two, int d_three ) {
	string str= "Error";
	int sum = d_one + d_two + d_three;
	if(sum != 180 ) return str;
	int cnt = 0;
	
	if (d_one == d_two) {
		if (cnt == 2)		cnt = 3;
		else if (cnt == 0)	cnt = 2;
	}
	if (d_two == d_three) {
		if (cnt == 2)		cnt = 3;
		else if (cnt == 0)	cnt = 2;
	}
	if (d_three == d_one) {
		if (cnt == 2)		cnt = 3;
		else if(cnt == 0)	cnt = 2;
	}

	if (cnt == 0) {
		str = "Scalene";
	} else if (cnt == 2){
		str = "Isosceles";
	} else if (cnt == 3) {
		str = "Equilateral";
	}
	return  str;
}

int main() {
	freopen("./resources/1/0000/10101.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int d_one, d_two, d_three;
	cin >> d_one >> d_two >> d_three;
	cout << kinds(d_one, d_two, d_three) << '\n';
	return 0;
}


/*

https://www.acmicpc.net/problem/10101

�ﰢ�� �ܿ�� ���дٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	256 MB	24132	13556	12286	56.273%
����

â���̴� �ﰢ���� ������ �� �������� ���Ѵ�. ���� ���α׷��� �̿��� �̸� �ܿ���� �Ѵ�.

�ﰢ���� �� ���� �Է¹��� ����,

	�� ���� ũ�Ⱑ ��� 60�̸�, Equilateral
	�� ���� ���� 180�̰�, �� ���� ���� ��쿡�� Isosceles
	�� ���� ���� 180�̰�, ���� ���� ���� ��쿡�� Scalene
	�� ���� ���� 180�� �ƴ� ��쿡�� Error

�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

�� 3���� �ٿ� ���� �ﰢ���� ���� ũ�Ⱑ �־�����. ��� ������ 0���� ũ��, 180���� �۴�.
���

������ ���� ���� Equilateral, Isosceles, Scalene, Error �� �ϳ��� ����Ѵ�.
���� �Է� 1

60
70
50

���� ��� 1

Scalene

��ó

Olympiad > Canadian Computing Competition & Olympiad > 2014 > CCC 2014 Junior Division 1��

	������ ������ ���: baekjoon
	�����͸� �߰��� ���: choiking10
	������ ��Ÿ�� ã�� ���: doju, qja0950

�˰��� �з�

	����
	������

�޸�


*/