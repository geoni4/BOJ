#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    freopen("./resources/0/1000/1269.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int A, B;
    set<int> numSet;
    cin >> A >> B;
    for (int i = 0; i < A; i++) {
        int num; cin >> num;
        numSet.insert(num);
    }
    for (int i = 0; i < B; i++) {
        int num; cin >> num;
        if (numSet.find(num) != numSet.end())   numSet.erase(num);
        else                                    numSet.insert(num);
    }
    cout << numSet.size();
    return 0;
}


/*

https://www.acmicpc.net/problem/1269

��Ī ������
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	256 MB	21796	13742	11406	63.796%
����

�ڿ����� ���ҷ� ���� �������� �ƴ� �� ���� A�� B�� �ִ�. �̶�, �� ������ ��Ī �������� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �� ���� A�� B�� ���� ��, (A-B)�� (B-A)�� �������� A�� B�� ��Ī �������̶�� �Ѵ�.

���� ���, A = { 1, 2, 4 } �̰�, B = { 2, 3, 4, 5, 6 } ��� �� ��,  A-B = { 1 } �̰�, B-A = { 3, 5, 6 } �̹Ƿ�, ��Ī �������� ������ ������ 1 + 3 = 4���̴�.
�Է�

ù° �ٿ� ���� A�� ������ ������ ���� B�� ������ ������ �� ĭ�� ���̿� �ΰ� �־�����. ��° �ٿ��� ���� A�� ��� ���Ұ�, ��° �ٿ��� ���� B�� ��� ���Ұ� �� ĭ�� ���̿� �ΰ� ���� �־�����. �� ������ ������ ������ 200,000�� ���� ������, ��� ������ ���� 100,000,000�� ���� �ʴ´�.
���

ù° �ٿ� ��Ī �������� ������ ������ ����Ѵ�.
���� �Է� 1

3 5
1 2 4
2 3 4 5 6

���� ��� 1

4

��ó

    ������ ���� ���: author5

�˰��� �з�

    �ڷ� ����
    �ؽø� ����� ���հ� ��
    Ʈ���� ����� ���հ� ��

�޸�

*/