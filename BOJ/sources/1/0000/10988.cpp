#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
    freopen("./resources/1/0000/10988.txt", "r", stdin);
    cin.tie(0), ios::sync_with_stdio(0);
    string str;

    cin >> str;
    bool answer = 0;
    int low = 0, high = str.length()-1;
    while(1){
        if (low >= high) {
            answer = 1;
            break;
        } 
        if (str.at(low) == str.at(high)) {
            low++; high--;
        }
        else break;
    }
    
    cout << answer << '\n';

    return 0;
}







/*

https://www.acmicpc.net/problem/10988


�Ӹ�������� Ȯ���ϱ�
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	256 MB	38793	24638	21314	64.553%
����

���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �̶�, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�.

level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.
�Է�

ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
���

ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.
���� �Է� 1

level

���� ��� 1

1

���� �Է� 2

baekjoon

���� ��� 2

0

��ó

    ������ ���� ���: baekjoon
    �����͸� �߰��� ���: oopar2, pda_pro12

�˰��� �з�

    ����
    ���ڿ�

�޸�


*/