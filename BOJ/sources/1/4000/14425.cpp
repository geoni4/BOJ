#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
using namespace std;



int main() {
    freopen("./resources/1/4000/14425.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int N, M;

    set<string> strSet;
    string str;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        str = "";
        cin >> str;
        strSet.insert(str);
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
        str = "";
        cin >> str;
        set<string>::iterator iter = strSet.find(str);

        if (iter != strSet.end()) {
            strSet.erase(iter);
            count++;
        }
    }
    cout << count;
    return 0;
}



/*

https://www.acmicpc.net/problem/14425

���ڿ� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� (�ϴ� ����)	1536 MB	35497	19178	14490	53.782%
����

�� N���� ���ڿ��� �̷���� ���� S�� �־�����.

�Է����� �־����� M���� ���ڿ� �߿��� ���� S�� ���ԵǾ� �ִ� ���� �� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���ڿ��� ���� N�� M (1 �� N �� 10,000, 1 �� M �� 10,000)�� �־�����.

���� N���� �ٿ��� ���� S�� ���ԵǾ� �ִ� ���ڿ����� �־�����.

���� M���� �ٿ��� �˻��ؾ� �ϴ� ���ڿ����� �־�����.

�Է����� �־����� ���ڿ��� ���ĺ� �ҹ��ڷθ� �̷���� ������, ���̴� 500�� ���� �ʴ´�. ���� S�� ���� ���ڿ��� ���� �� �־����� ���� ����.
���

ù° �ٿ� M���� ���ڿ� �߿� �� �� ���� ���� S�� ���ԵǾ� �ִ��� ����Ѵ�.
���� �Է� 1

5 11
baekjoononlinejudge
startlink
codeplus
sundaycoding
codingsh
baekjoon
codeplus
codeminus
startlink
starlink
sundaycoding
codingsh
codinghs
sondaycoding
startrink
icerink

���� ��� 1

4

��ó

    ������ ���� ���: baekjoon
    �����͸� �߰��� ���: djm03178, jaeyoon8783, qwe123rt45, solarmagic, tongnamuu
    ������ ��Ÿ�� ã�� ���: Green55

�˰��� �з�

    �ڷ� ����
    ���ڿ�
    �ؽø� ����� ���հ� ��
    Ʈ���� ����� ���հ� ��

�ð� ����

    Java 8: 6 ��
    Java 8 (OpenJDK): 6 ��
    Java 11: 6 ��
    Kotlin (JVM): 6 ��

�޸�

*/