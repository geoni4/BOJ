#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int main() {
    freopen("./resources/1/1000/11866.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    queue<int> numQ;
    int N, K;

    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        numQ.push(i);
    }
    cout << '<';
    while (1) {
        int result;
        int cnt = 0;
        while (cnt< K-1) {
            cnt++;
            numQ.push(numQ.front()); numQ.pop();
        }
        
        result = numQ.front(); numQ.pop();
        cout << result;
        if (numQ.size() == 0) {
                break;
        }
        cout << ", ";
    }
    cout << '>';
    return 0;
}

/*

https://www.acmicpc.net/problem/11866

�似Ǫ�� ���� 0
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	512 MB	61343	34835	29249	56.590%
����

�似Ǫ�� ������ ������ ����.

1������ N������ N���� ����� ���� �̷�鼭 �ɾ��ְ�, ���� ���� K(�� N)�� �־�����. ���� ������� K��° ����� �����Ѵ�. �� ����� ���ŵǸ� ���� ������ �̷���� ���� ���� �� ������ ����� ������. �� ������ N���� ����� ��� ���ŵ� ������ ��ӵȴ�. ������ ������� ���ŵǴ� ������ (N, K)-�似Ǫ�� �����̶�� �Ѵ�. ���� ��� (7, 3)-�似Ǫ�� ������ <3, 6, 2, 7, 5, 1, 4>�̴�.

N�� K�� �־����� (N, K)-�似Ǫ�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� N�� K�� �� ĭ�� ���̿� �ΰ� ������� �־�����. (1 �� K �� N �� 1,000)
���

������ ���� �似Ǫ�� ������ ����Ѵ�.
���� �Է� 1

7 3

���� ��� 1

<3, 6, 2, 7, 5, 1, 4>

��ó

    ������ ���� ���: baekjoon

�˰��� �з�

    ����
    �ڷ� ����
    ť

�޸�

*/