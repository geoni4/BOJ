#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int main() {
    freopen("./resources/1/8000/18258.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    string cmd;
    int N;
    cin >> N;
    queue<int> nums;
    int num;
    for (int n = 0; n < N; n++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            nums.push(num);
        }
        else if (cmd == "pop") {
            if(nums.size() != 0){
                cout << nums.front();
                nums.pop();
            }
            else
                cout << -1;
            cout << '\n';
        }
        else if (cmd == "front") {
            if (nums.size() != 0)
                cout << nums.front();
            else
                cout << -1;
            cout << '\n';
        }
        else if (cmd == "back") {
            if (nums.size() != 0)
                cout << nums.back();
            else
                cout << -1;
            cout << '\n';
        }
        else if (cmd == "size") {
            cout << nums.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << nums.empty() << '\n';
        }
    }
    return 0;
}



/*

https://www.acmicpc.net/problem/18258

ť 2
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� (�ϴ� ����)	512 MB	75736	23848	19309	31.976%
����

������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

    push X: ���� X�� ť�� �ִ� �����̴�.
    pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    size: ť�� ����ִ� ������ ������ ����Ѵ�.
    empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
    front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
    back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�

ù° �ٿ� �־����� ����� �� N (1 �� N �� 2,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
���

����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է� 1

15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front

���� ��� 1

1
2
2
0
1
2
-1
0
1
-1
0
3

��ó

    ������ ���� ���: jh05013

�˰��� �з�

����
�ð� ����

    Python 3: 3 ��
    PyPy3: 3 ��
    Python 2: 3 ��
    PyPy2: 3 ��

�޸�

*/