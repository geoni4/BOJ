#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

bool comparing(int a, int b) {
    return a > b;
}

int main() {
	freopen("./resources/0/1000/1966.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++) {
        pair<int, int> p;
        queue <pair<int, int>> printQ;
        deque<int> d_priority;
        int N, M;
        cin >> N >> M;
        for (int i = 0; i < N; i++) {
            int pri;
            cin >> pri;
            p = make_pair(i, pri);
            printQ.push(p);
            d_priority.push_back(pri);
        }
        sort(d_priority.begin(), d_priority.end(), comparing);
        int cnt = 0;
        while (printQ.size() > 0) {

            if (printQ.front().second == d_priority.front()) {
                cnt++;
                if (printQ.front().first == M) break;
                printQ.pop();
                d_priority.pop_front();
            }
            else {
                printQ.push(printQ.front()); printQ.pop();
            }
        }
        cout << cnt << '\n';
    }
	return 0;
}


/*

https://www.acmicpc.net/problem/1966

������ ť �ٱ���
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	128 MB	66778	38248	30188	58.230%
����

�����е� �˴ٽ��� �������� ������ ���� �������� �μ��ϰ��� �ϴ� ������ �μ� ����� ���� ��������Ρ�, �� ���� ��û�� ���� ���� �μ��Ѵ�. ���� ���� ������ ���δٸ� Queue �ڷᱸ���� �׿��� FIFO - First In First Out - �� ���� �μⰡ �ǰ� �ȴ�. ������ ����̴� ���ο� �����ͱ� ���� ����Ʈ��� �����Ͽ��µ�, �� �����ͱ�� ������ ���� ���ǿ� ���� �μ⸦ �ϰ� �ȴ�.

    ���� Queue�� ���� �տ� �ִ� ������ ���߿䵵���� Ȯ���Ѵ�.
    ������ ������ �� ���� �������� �߿䵵�� ���� ������ �ϳ��� �ִٸ�, �� ������ �μ����� �ʰ� Queue�� ���� �ڿ� ���ġ �Ѵ�. �׷��� �ʴٸ� �ٷ� �μ⸦ �Ѵ�.

���� ��� Queue�� 4���� ����(A B C D)�� �ְ�, �߿䵵�� 2 1 4 3 ��� C�� �μ��ϰ�, �������� D�� �μ��ϰ� A, B�� �μ��ϰ� �ȴ�.

�������� �� ����, ���� Queue�� �ִ� ������ ���� �߿䵵�� �־����� ��, � �� ������ �� ��°�� �μ�Ǵ��� �˾Ƴ��� ���̴�. ���� ��� ���� ������ C������ 1��°��, A������ 3��°�� �μ�ǰ� �ȴ�.
�Է�

ù �ٿ� �׽�Ʈ���̽��� ���� �־�����. �� �׽�Ʈ���̽��� �� �ٷ� �̷���� �ִ�.

�׽�Ʈ���̽��� ù ��° �ٿ��� ������ ���� N(1 �� N �� 100)��, �� ��°�� �μ�Ǿ����� �ñ��� ������ ���� Queue���� �� ��°�� ���� �ִ����� ��Ÿ���� ���� M(0 �� M < N)�� �־�����. �̶� �� ������ 0��°��� ����. �� ��° �ٿ��� N�� ������ �߿䵵�� ���ʴ�� �־�����. �߿䵵�� 1 �̻� 9 ������ �����̰�, �߿䵵�� ���� ������ ���� �� ���� ���� �ִ�.
���

�� �׽�Ʈ ���̽��� ���� ������ �� ��°�� �μ�Ǵ��� ����Ѵ�.
���� �Է� 1

3
1 0
5
4 2
1 2 3 4
6 0
1 1 9 1 1 1

���� ��� 1

1
2
5

��ó

ICPC > Regionals > Europe > Northwestern European Regional Contest > NWERC 2006 F��

    ������ ��Ÿ�� ã�� ���: doju
    ����� ǥ���� ã�� ���: iiwwnnaa, jh05013

�˰��� �з�

    ����
    �ڷ� ����
    �ùķ��̼�
    ť

�޸�

*/
