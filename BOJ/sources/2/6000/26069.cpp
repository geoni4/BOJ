#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
using namespace std;

int main() {
    freopen("./resources/2/6000/26069.txt", "r", stdin);
    cin.tie(nullptr); ios::sync_with_stdio(false);
    set<string> strSet;

    int N;
    cin >> N;
    strSet.insert("ChongChong");
    for (int i = 0; i < N; i++) {
        string tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        set<string>::iterator iter = strSet.find(tmp1);
        if (iter != strSet.end()) {
            strSet.insert(tmp2);
            continue;
        }
        iter = strSet.find(tmp2);
        if (iter != strSet.end()) {
            strSet.insert(tmp1);
            continue;
        }
    }
    cout << strSet.size();

    return 0;

}




/*

https://www.acmicpc.net/problem/26069

���Ӽ� ���� ������
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	1024 MB	3694	2356	2071	64.719%
����

������ ���� �ߴ� ���Ѱ� �װ� ���� ����

�����̴� ģ�� �������� �Ұ��� ��2ȸ �����ſ� �⿬�� ��ȸ�� �����!

�����̴� �ڽ��� ������ ������ ���� ������, �������� ȯ���� ��� �Ѵ�. �� ���� �ߵ����� ���ϱ� ������, �ѹ� ���� �� ����� ��� ���� �ϰ� �Ź�����.

������ ���� �ߴ� ���� 2����

������� ���� ����� �ð� �������

$N$�� �־�����. (�����̴� �䳢������ �� ���������� ���ǻ� ����̶�� �����Ѵ�.)

������ ���� ���� �ʰ� �ִ� ����� ������ ���� �߰� �ִ� ����� ������ �ȴٸ�, ���� ���� ���ķ� ������ ���� �߰� �ȴ�.

����� ���۵Ǳ� ���� ������ ���� �߰� �ִ� ����� ������ ���̶�� �� ��, ������ ��� ���� ������ ���� �ߴ� ����� �� ������ ���غ���!
�Է�

ù��° �ٿ��� ������� ���� ����� ��

$N\ (1 \le N \le 1\ 000)$�� �־�����.

�ι�° �ٺ���
$N$���� �ٿ� ���� ������� ���� ����� �־�����. $i + 1$��° �ٿ��� $i$��°�� ���� ������� �̸� $A_i$�� $B_i$�� ������ ���̿� �ΰ� �־�����. $A_i$�� $B_i$�� ���ڿ� ���� ��ҹ��ڷ� �̷���� �ִ� ����

$20$�� ���ڿ��̸�, ���� ���� �ʴ�.

�������� �̸��� ChongChong���� �־�����, ��Ͽ��� 1ȸ �̻� �־�����.

���������� ������, ����� �̸��� ��ҹ��ڸ� �����Ѵ�. (ChongChong�� chongchong�� �ٸ� �̸��̴�.)
���

������ ��� ���� ������ ���� �ߴ� ����� ���� ����϶�.
���� �Է� 1

12
bnb2011 chansol
chansol chogahui05
chogahui05 jthis
jthis ChongChong
jthis jyheo98
jyheo98 lms0806
lms0806 pichulia
pichulia pjshwa
pjshwa r4pidstart
r4pidstart swoon
swoon tony9402
tony9402 bnb2011

���� ��� 1

10

��ó

Contest > ������ > ��2ȸ ������ B��

    ������ �˼��� ���: bnb2011, chogahui05, jthis, jyheo98, lms0806, pichulia, r4pidstart, tony9402
    ������ ���� ���: pjshwa

�˰��� �з�

    �ڷ� ����
    �ؽø� ����� ���հ� ��
    Ʈ���� ����� ���հ� ��

�޸�

�޸� �ۼ��ϱ�

*/