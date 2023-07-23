#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int main() {
    freopen("./resources/1/0000/10866.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    deque<int> deq;
    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_back") {
            int tmp;
            cin >> tmp;
            deq.push_back(tmp);
        }
        else if (cmd == "push_front") {
            int tmp; cin >> tmp;
            deq.push_front(tmp);
        }
        else if (cmd == "pop_front" || cmd == "front") {
            if (deq.size() == 0) {
                cout << -1 << '\n';
                continue;
            }
            cout<< deq.front() << '\n';
            if(cmd == "pop_front")
                deq.pop_front();
        }
        else if (cmd == "pop_back" || cmd == "back") {
            if (deq.size() == 0) {
                cout << -1 << '\n';
                continue;
            }
            cout << deq.back() << '\n';
            if(cmd == "pop_back")
                deq.pop_back();
        }
        else if (cmd == "size") {
            cout << deq.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << deq.empty() << '\n';
        }
    }
    return 0;
}

/*

https://www.acmicpc.net/problem/10866

�� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
0.5 �� (�߰� �ð� ����) 	256 MB	70848	38985	32925	56.007%
����

������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

    push_front X: ���� X�� ���� �տ� �ִ´�.
    push_back X: ���� X�� ���� �ڿ� �ִ´�.
    pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    size: ���� ����ִ� ������ ������ ����Ѵ�.
    empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
    front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�

ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
���

����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է� 1

15
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
empty
front

���� ��� 1

2
1
2
0
2
1
-1
0
1
-1
0
3

���� �Է� 2

22
front
back
pop_front
pop_back
push_front 1
front
pop_back
push_back 2
back
pop_front
push_front 10
push_front 333
front
back
pop_back
pop_back
push_back 20
push_back 1234
front
back
pop_back
pop_back

���� ��� 2

-1
-1
-1
-1
1
1
2
2
333
10
10
333
20
1234
1234
20

��ó

    ������ ���� ���: baekjoon
    �����͸� �߰��� ���: jh05013
    ������ ��Ÿ�� ã�� ���: sungjune222

�˰��� �з�

    ����
    �ڷ� ����
    ��

�޸�

*/