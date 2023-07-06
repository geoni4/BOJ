#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

bool isPrime(long long num) {
    for (long long i = 2;i*i <= num;i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    freopen("./resources/0/4000/4134.txt", "r", stdin);
    cin.tie(nullptr), ios::sync_with_stdio(false);
    int N;
    long long s;
    cin >> N;

    for (int n = 0; n < N; n++) {
        cin >> s;
        if (s <= 1) s = 2;
        for (long long i = s; i < 2 * s; i++) {
            if (isPrime(i)) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}





/*

https://www.acmicpc.net/problem/4134

���� �Ҽ� �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	12336	3324	2631	25.993%
����

���� n(0 �� n �� 4*109)�� �־����� ��, n���� ũ�ų� ���� �Ҽ� �� ���� ���� �Ҽ� ã�� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���� n�� �־�����.
���

������ �׽�Ʈ ���̽��� ���ؼ� n���� ũ�ų� ���� �Ҽ� �� ���� ���� �Ҽ��� �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է� 1

3
6
20
100

���� ��� 1

7
23
101

��ó

Contest > Waterloo's local Programming Contests > 15 July, 2012 B��

    ������ ������ ���: baekjoon

�˰��� �з�

    ����
    ���Ʈ���� �˰���
    ������
    �Ҽ� ����

�޸�

*/