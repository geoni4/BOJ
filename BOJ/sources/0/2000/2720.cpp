#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int change_money(int money, int unit) {
	int change;
	change = money - (money / unit) * unit;
	return change;
}

int main() {
	freopen("./resources/0/2000/2720.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int change = 0;
		cin >> change;
		int changes[4] = { 0 };
		int units[4] = { 25, 10, 5, 1 };

		for (int i = 0; i < 4; i++) {
			changes[i] = change / units[i];
			change = change_money(change, units[i]);
		}

		for (int i = 0; i < 4; i++) {
			cout << changes[i];
			if (i == 3) break;
			cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}


/*

https://www.acmicpc.net/problem/2720

��Ź�� ���� ���� �����ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	15655	11370	10331	73.824%
����

�̱����� ���а� �����̴� ��Ź�Ҹ� ��ϰ� �ִ�. �����̴� �ֱٿ� �Ƹ�����Ʈ�� ����л� ������ ä���ߴ�.

�����̴� ���Ͽ��� �Ǹ��ߴ�.

������ �Ž������� �ִ� ���� �ڲ� �Ǽ��Ѵ�.

������ $0.5�޷��� ����ϴ� ��쿡 �Ž��������� $5�޷��� �ִ°��̴�!

��¿�� ���� �پ �ڵ� �Ƿ��� ������ ������ �����ִ� ���α׷��� �ۼ��Ϸ��� ������, ��ƺ�θ� �ϴ��� �ڵ��� �ð��� ��� �� ������ �а� �ִ� �������� ��� ���־�� �Ѵ�.

�Ž������� �׼��� �־����� ������ ����� ����(Quarter, $0.25)�� ����, ����(Dime, $0.10)�� ����, ����(Nickel, $0.05)�� ����, ���(Penny, $0.01)�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �Ž������� �׻� $5.00 �����̰�, �մ��� �޴� ������ ������ �ּҷ� �Ϸ��� �Ѵ�. ���� ���, $1.24�� �Ž��� �־�� �Ѵٸ�, �մ��� 4����, 2����, 0����, 4��ϸ� �ް� �ȴ�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� �Ž����� C�� ��Ÿ���� ���� �ϳ��� �̷���� �ִ�. C�� ������ ��Ʈ�̴�. (1�޷� = 100��Ʈ) (1<=C<=500)
���

�� �׽�Ʈ���̽��� ���� �ʿ��� ������ ����, ������ ����, ������ ����, ����� ������ �������� �����Ͽ� ����Ѵ�.
���� �Է� 1

3
124
25
194

���� ��� 1

4 2 0 4
1 0 0 0
7 1 1 4

��Ʈ

��ó

ICPC > Regionals > North America > Greater New York Region > 2006 Greater New York Programming Contest A��

	������ ������ ���: baekjoon

�˰��� �з�

	����
	�׸��� �˰���
	��Ģ����

�޸�

*/