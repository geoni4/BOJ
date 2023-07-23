#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>

using namespace std;

int main() {
    freopen("./resources/2/5000/25192.txt", "r", stdin);

    set<string> strSet;
    string tempStr;
    int N;
    cin >> N;
    int count = 0;
    for (int i = 0; i < N; i++) {
        cin >> tempStr;
        if (tempStr == "ENTER") {
            count += strSet.size();
            strSet.clear();
        }
        else strSet.insert(tempStr);
    }
    count += strSet.size();
    cout << count << '\n';

    set<string>::iterator iter;
    for (iter = strSet.begin(); iter != strSet.end(); iter++) {
        cout << *iter << '\n';
    }

    return 0;

}


/*

https://www.acmicpc.net/problem/25192

�λ缺 ���� ������
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	1024 MB	7501	3267	2746	46.534%
����

�λ��ϴ� ������

�˰��� �Թ��� ���� ä�ù濡���� ���ο� �е��� ������ �� ������ ����Ƽ���� ����� �λ縦 �Ѵ�. �̸� �� ���ڿ� ų�� �ӽ��� ä�ù��� ����� ������ �� �� ����Ƽ���� ���� Ƚ���� ���� ����� �ߴ�.

ENTER�� ���ο� ����� ä�ù濡 ���������� ��Ÿ����. �� �ܴ� ä���� �Է��� ������ �г����� ��Ÿ����. �г����� ���� �Ǵ� ���� ��ҹ��ڷ� �����Ǿ� �ִ�.

���ο� ����� ������ ���� ó�� ä���� �Է��ϴ� ����� �ݵ�� ����Ƽ������ �λ縦 �Ѵ�. �� ���� ����� ����Ƽ���� ���� ���� ����� ä�� ����̴�.

ä�� ��� �� ����Ƽ���� ���� Ƚ���� ���غ���!
�Է�

ù ��° �ٿ��� ä�ù��� ��� ���� ��Ÿ���� ����
$N$ �� �־�����. (

$1 \le N \le 100\,000$)

�� ��° �ٺ���
$N$ ���� �ٿ� ���� ���ο� ����� ������ ��Ÿ���� ENTER, Ȥ�� ä���� �Է��� ������ �г����� ���ڿ��� �־�����. (���ڿ�����

$1 \le \texttt{���ڿ� ����} \le 20$)

ù ��° �־����� ���ڿ��� ������ ENTER�̴�.
���

ä�� ��� �� ����Ƽ���� ���� Ƚ���� ����Ͻÿ�.
���� �Է� 1

9
ENTER
pjshwa
chansol
chogahui05
lms0806
pichulia
r4pidstart
swoon
tony9402

���� ��� 1

8

���� �Է� 2

7
ENTER
pjshwa
chansol
chogahui05
ENTER
pjshwa
chansol

���� ��� 2

5

ù��° ���ο� ����� ���� ��  pjshwa, chansol, chogahui05�� ��� ����Ƽ������ �λ��ߴ�.

�ι�° ���ο� ����� ���� ��  pjshwa�� chansol�� �ٽ� ����Ƽ������ �λ��ߴ�.
���� �Է� 3

3
ENTER
lms0806
lms0806

���� ��� 3

1

lms0806�� ���ο� ����� �������Ƿ� ó���� ����Ƽ������ �λ��ϰ�, �� �ڷδ� �Ϲ� ä���� �ߴ�.
��ó

Contest > ������ > ��1ȸ ������ B��

    ������ �˼��� ���: chansol, chogahui05, pichulia, pjshwa, r4pidstart, tony9402
    ������ ���� ���: lms0806
    �����͸� �߰��� ���: pichulia

�˰��� �з�

    �ڷ� ����
    �ؽø� ����� ���հ� ��
    Ʈ���� ����� ���հ� ��

�޸�

*/