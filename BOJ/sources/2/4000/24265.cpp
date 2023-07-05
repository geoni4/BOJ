#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
    freopen("./resources/2/4000/24265.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    long long n;
    cin >> n;

    cout << n * (n-1)/2 << '\n' << 2;
    return 0;
}

/*

https://www.acmicpc.net/problem/24265

�˰����� ���� - �˰������� ���� �ð� 4
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	512 MB	7488	3880	3673	52.592%
����

���õ� �����̴� �˰������� ����ð� ���� ������ �ϰ� �ִ�. �ƺ��� ������ ������ �л����� �� �����ߴ��� ������ ���ؼ� Ȯ���غ���.

�Է��� ũ�� n�� �־����� MenOfPassion �˰����� ���� �ð��� ���� ��°� ���� ������� ����غ���.

MenOfPassion �˰������� ������ ����.

MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] �� A[j]; # �ڵ�1
    return sum;
}

�Է�

ù° �ٿ� �Է��� ũ�� n(1 �� n �� 500,000)�� �־�����.
���

ù° �ٿ� �ڵ�1 �� ���� Ƚ���� ����Ѵ�.

��° �ٿ� �ڵ�1�� ���� Ƚ���� ���׽����� ��Ÿ������ ��, �ְ������� ������ ����Ѵ�. ��, ���׽����� ��Ÿ�� �� ���ų� �ְ������� ������ 3���� ũ�� 4�� ����Ѵ�.
���� �Է� 1

7

���� ��� 1

21
2

�ڵ�1 �� 21ȸ ����ǰ� �˰������� ���� �ð��� n2�� ����Ѵ�.
��ó

    ������ �˼��� ���: heeda0528, jhnah917, jthis, tlsdydaud1
    ������ ���� ���: MenOfPassion

�˰����� �з�

    ����
    ����
    ��Ģ����
    �ùķ��̼�

�޸�

*/