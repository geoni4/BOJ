#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int main() {
	freopen("./resources/1/4000/14215.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int max_len = n1;
    max_len = max_len > n2 ? max_len : n2;
    max_len = max_len > n3 ? max_len : n3;

    int circum = 0;

    if (n1 + n2 + n3 > max_len * 2) circum = n1 + n2 + n3;
    else                            circum = (n1 + n2 + n3 - max_len)*2 -1;
    cout << circum;
	return 0;
}


/*

https://www.acmicpc.net/problem/14215   

�� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	512 MB	6070	4172	3906	69.775%
����

�����̴� ���̰� a, b, c�� �� ���븦 ������ �ְ�, �� ������ ���̸� ������� ���� �� �ִ�.

�����̴� �� ���븦 �̿��ؼ� �Ʒ� ������ �����ϴ� �ﰢ���� ������� �Ѵ�.

    �� ������ ���̴� ���� �����̴�
    �� ���븦 �̿��ؼ� ���̰� ����� �ﰢ���� ���� �� �־�� �Ѵ�.
    �ﰢ���� �ѷ��� �ִ�� �ؾ� �Ѵ�.

a, b, c�� �־����� ��, ���� �� �ִ� ���� ū �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� a, b, c (1 �� a, b, c �� 100)�� �־�����.
���

ù° �ٿ� ���� �� �ִ� ���� ū �ﰢ���� �ѷ��� ����Ѵ�.
���� �Է� 1

1 2 3

���� ��� 1

5

���� �Է� 2

2 2 2

���� ��� 2

6

���� �Է� 3

1 100 1

���� ��� 3

3

���� �Է� 4

41 64 16

���� ��� 4

113

��ó

    ������ ������ ���: baekjoon

�˰��� �з�

    ����
    ����
    ������

�޸�  

*/