#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("./resources/0/1000/1764.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int N, M;
    set<string> names_s;
    vector<string> names_v;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        names_s.insert(name);
    }
    for (int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if (names_s.find(name) != names_s.end()) {
            names_v.push_back(name);
        }
    }
    sort(names_v.begin(), names_v.end());
    cout << names_v.size() << '\n';
    for (int i = 0; i < names_v.size(); i++)
        cout << names_v[i] << '\n';
    return 0;
}

/*

https://www.acmicpc.net/problem/1764

�躸��
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	256 MB	83303	35328	27239	40.729%
����

�������� �赵 ���� ����� ��ܰ�, ���� ���� ����� ����� �־��� ��, �赵 ���� ���� ����� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �赵 ���� ����� �� N, ���� ���� ����� �� M�� �־�����. �̾ ��° �ٺ��� N���� �ٿ� ���� �赵 ���� ����� �̸���, N+2° �ٺ��� ���� ���� ����� �̸��� ������� �־�����. �̸��� ���� ���� ���ĺ� �ҹ��ڷθ� �̷������, �� ���̴� 20 �����̴�. N, M�� 500,000 ������ �ڿ����̴�.

�赵 ���� ����� ��ܿ��� �ߺ��Ǵ� �̸��� ������, ���� ���� ����� ��ܵ� ���������̴�.
���

�躸���� ���� �� ����� ���������� ����Ѵ�.
���� �Է� 1

3 4
ohhenrie
charlie
baesangwook
obama
baesangwook
ohhenrie
clinton

���� ��� 1

2
baesangwook
ohhenrie

��ó

    ������ ���� ���: author5

�˰��� �з�

    �ڷ� ����
    ���ڿ�
    ����
    �ؽø� ����� ���հ� ��

�޸� 

*/