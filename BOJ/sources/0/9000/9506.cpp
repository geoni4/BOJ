#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int main() {
    freopen("./resources/0/9000/9506.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int num;
    while (1) {
        int numArr[100001]={ -1 };
        int head = 0;
        int tail = 0;
        int sum = 0;
        cin >> num;
        if (num == -1) break;
        for (int i = 1; i < num; i++) {
            if (!(num % i)) {
                numArr[tail++] = i;
                sum += i;
            }
        }
        if (sum == num) {
            cout << num << " = ";
            for (int i = 0; i < tail; i++) {
                cout << numArr[i];
                if (i == tail - 1) break;
                cout << " + ";
            }
            cout << '\n';
        }
        else {
            cout << num << " is NOT perfect.\n";
        }
    }
    return 0;
}

/*

https://www.acmicpc.net/problem/9506

������� �� �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	128 MB	21165	11310	10212	54.447%
����

� ���� n�� �ڽ��� ������ ��� ������� �հ� ������, �� ���� ��������� �Ѵ�.

���� ��� 6�� 6 = 1 + 2 + 3 ���� �������̴�.

n�� ���������� �ƴ��� �Ǵ����ִ� ���α׷��� �ۼ��϶�.
�Է�

�Է��� �׽�Ʈ ���̽����� �� �� �������� n�� �־�����. (2 < n < 100,000)

�Է��� �������� -1�� �־�����.
���

�׽�Ʈ���̽� ���� ���ٿ� �ϳ��� ����ؾ� �Ѵ�.

n�� ���������, n�� n�� �ƴ� ������� ������ ��Ÿ���� ����Ѵ�(���� ��� ����).

�̶�, ������� ������������ �����ؾ� �Ѵ�.

n�� �������� �ƴ϶�� n is NOT perfect. �� ����Ѵ�.
���� �Է� 1

6
12
28
-1

���� ��� 1

6 = 1 + 2 + 3
12 is NOT perfect.
28 = 1 + 2 + 4 + 7 + 14

��ó

ICPC > Regionals > North America > Pacific Northwest Regional > 2013 Pacific Northwest Region Programming Contest F��

    ������ ��Ÿ�� ã�� ���: jh05013, pkcchoi3
    �����͸� �߰��� ���: seong954t
    ������ ������ ���: yukariko

�˰��� �з�

    ����
    ����
    ������

�޸�

*/