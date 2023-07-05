#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;

bool compare(string a, string b) {
	return a > b;
}

int main() {
	freopen("./resources/0/7000/7785.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<string> time_gate_v;
	set<string> time_gate_s;
	string name, menu;
	for (int i = 0; i < N; i++) {
		cin >> name >> menu;
		if (menu == "enter") {
			time_gate_s.insert(name);
		}
		else if (menu == "leave") {
			time_gate_s.erase(name);
		}
	}
	for (set<string>::iterator iter=time_gate_s.begin(); iter!=time_gate_s.end(); iter++) {
		time_gate_v.push_back(*iter);
	}
	sort(time_gate_v.begin(), time_gate_v.end(), compare);
	for (int i = 0; i < time_gate_v.size(); i++) {
		cout << time_gate_v[i] << '\n';
	}
	cout << '\n';

	return 0;
}

/*

https://www.acmicpc.net/problem/7785

ȸ�翡 �ִ� ��� �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	256 MB	32753	13324	9835	41.498%
����

����̴� �������� ����Ʈ���� ȸ�� ��ۿ��� ���Ѵ�. �� ȸ���� ���� ū Ư¡�� �����ο� ����� �ð��̴�. ����, �������� �ݵ�� 9�ú��� 6�ñ��� ȸ�翡 ���� �ʾƵ� �ȴ�.

�� ������ �ڱⰡ ���� �� ����� �� �ְ�, �ƹ����� ����� �� �ִ�.

����̴� ��� ����� ����ī�� �ý����� �α׸� ������ �ִ�. �� �α״� � ����� ȸ�翡 ���Դ���, ���������� ��ϵǾ��� �ִ�. �αװ� �־����� ��, ���� ȸ�翡 �ִ� ��� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �α׿� ��ϵ� ���� ����� �� n�� �־�����. (2 �� n �� 106) ���� n���� �ٿ��� ���� ����� ������� �־�����, �� ����� �̸��� �־����� "enter"�� "leave"�� �־�����. "enter"�� ���� ���, "leave"�� ���� ����̴�.

ȸ�翡�� ���������� ������, ��ҹ��ڰ� �ٸ� ��쿡�� �ٸ� �̸��̴�. ������� �̸��� ���ĺ� ��ҹ��ڷ� ������ 5���� ������ ���ڿ��̴�.
���

���� ȸ�翡 �ִ� ����� �̸��� ���� ���� �������� �� �ٿ� �� �� ����Ѵ�.
���� �Է� 1

4
Baha enter
Askar enter
Baha leave
Artem enter

���� ��� 1

Askar
Artem

��ó

Contest > KBTU Open > KBTU Open 2008 E��

	������ ������ ���: baekjoon
	���� ������ ã�� ���: haja, lyzqm
	�����͸� �߰��� ���: jh05013

�˰��� �з�

����
�޸�

*/