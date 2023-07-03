#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int translate(char ch) {
    if (ch >= 'A' && ch <= 'Z')     ch -= 'A'  - 10;
    else                            ch -= '0';
    int tmp = ch;
    return tmp;
}

int main() {
	freopen("./resources/0/2000/2745.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);

    string str;
    int radix;
    int answer = 0;
    cin >> str >> radix;

    for (int i = 0; i < str.length(); i++) {
        if (i != 0) answer *= radix;
        answer += translate(str.at(i));
    }
    
    cout << answer;

	return 0;
}

/*

https://www.acmicpc.net/problem/2745

���� ��ȯ
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	26023	13869	11775	53.177%
����

B���� �� N�� �־�����. �� ���� 10�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� �ڸ��� �ִ�. �̷� ��쿡�� ������ ���� ���ĺ� �빮�ڸ� ����Ѵ�.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
�Է�

ù° �ٿ� N�� B�� �־�����. (2 �� B �� 36)

B���� �� N�� 10�������� �ٲٸ�, �׻� 10�ﺸ�� �۰ų� ����.
���

ù° �ٿ� B���� �� N�� 10�������� ����Ѵ�.
���� �Է� 1

ZZZZZ 36

���� ��� 1

60466175

��ó

    ������ ��Ÿ�� ã�� ���: bupjae

�˰��� �з�

    ����
    ����
    ���ڿ�

�޸�

*/