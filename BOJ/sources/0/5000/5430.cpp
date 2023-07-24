#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    freopen("./resources/0/5000/5430.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++) {
        int size, tmp_num;
        deque<int> num_q;
        string cmd, tmp_q;
        cin >> cmd >> size >> tmp_q;
        int tmp_size = tmp_q.size();
        for (int i = 0; i < tmp_size; i++) {
            if (tmp_q[i] == ',') tmp_q[i] = ' ';
            if (tmp_q[i] == '[') tmp_q[i] = ' ';
            if (tmp_q[i] == ']') tmp_q[i] = ' ';
        }
        stringstream stream;
        stream.str(tmp_q);
        bool isReverse = false;
        while (stream >> tmp_num) {
            num_q.push_back(tmp_num);
        }
        for (int i = 0; i < cmd.size(); i++) {
            if (cmd[i] == 'R') {
                isReverse = !isReverse;
            }
            else if (cmd[i] == 'D') {
                if (size == 0) {
                    cout << "error\n";
                    size--;
                    break;
                }
                if (!isReverse) {
                    num_q.pop_front();
                    size--;
                }
                else {
                    num_q.pop_back();
                    size--;
                }
            }
        }
        if (size < 0) continue;
        cout << '[';
        if(!isReverse){
            for (int i = 0; i < size; i++) {
                cout << num_q[i];
                if (i < size - 1)cout << ',';
            }
        }
        else {
            for (int i = size-1; i >= 0; i--) {
                cout << num_q[i];
                if (i > 0) cout << ',';
            }
        }
        cout << "]\n";
    }
    return 0;
}


/*

https://www.acmicpc.net/problem/5430

AC �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	256 MB	123355	27429	19439	19.953%
����

�����̴� �ָ��� �� ���� ��� ���ο� ��� AC�� �������. AC�� ���� �迭�� ������ �ϱ� ���� ���� ����̴�. �� ���� �� ���� �Լ� R(������)�� D(������)�� �ִ�.

�Լ� R�� �迭�� �ִ� ���� ������ ������ �Լ��̰�, D�� ù ��° ���� ������ �Լ��̴�. �迭�� ����ִµ� D�� ����� ��쿡�� ������ �߻��Ѵ�.

�Լ��� �����ؼ� �� ���� ����� �� �ִ�. ���� ���, "AB"�� A�� ������ ������ �ٷ� �̾ B�� �����ϴ� �Լ��̴�. ���� ���, "RDD"�� �迭�� ������ ���� ó�� �� ���� ������ �Լ��̴�.

�迭�� �ʱⰪ�� ������ �Լ��� �־����� ��, ���� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. T�� �ִ� 100�̴�.

�� �׽�Ʈ ���̽��� ù° �ٿ��� ������ �Լ� p�� �־�����. p�� ���̴� 1���� ũ�ų� ����, 100,000���� �۰ų� ����.

���� �ٿ��� �迭�� ����ִ� ���� ���� n�� �־�����. (0 �� n �� 100,000)

���� �ٿ��� [x1,...,xn]�� ���� ���·� �迭�� ����ִ� ������ �־�����. (1 �� xi �� 100)

��ü �׽�Ʈ ���̽��� �־����� p�� ������ �հ� n�� ���� 70���� ���� �ʴ´�.
���

�� �׽�Ʈ ���̽��� ���ؼ�, �Է����� �־��� ���� �迭�� �Լ��� ������ ����� ����Ѵ�. ����, ������ �߻��� ��쿡�� error�� ����Ѵ�.
���� �Է� 1

4
RDD
4
[1,2,3,4]
DD
1
[42]
RRD
6
[1,1,2,3,5,8]
D
0
[]

���� ��� 1

[2,1]
error
[1,2,3,5,8]
error

��ó

ICPC > Regionals > Europe > Northwestern European Regional Contest > Benelux Algorithm Programming Contest > BAPC 2012 I��

    ������ ������ ���: baekjoon
    ������ ��Ÿ�� ã�� ���: chatterboy, doju
    �����͸� �߰��� ���: jh05013, sojungkid

�˰��� �з�

    ����
    �ڷ� ����
    ���ڿ�
    �Ľ�
    ��

�޸�

*/