#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


bool cmp(pair<int, int> a, pair<int, int>b) {
	if(a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}


int round(int num1, int num2) {
	int result = num1 / num2;
	double n2 = num2;
	if (num2 / 2 == 0) {

	} else if (num1 % num2 <= -(n2 / 2)) {
		result -= 1;
	} else if (num1 % num2 > (n2 / 2)) {
		result += 1;
	}
	return result;
}

int main() {
	freopen("./resources/0/2000/2108.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int N, sum=0, min_num = 0, midnum, frq=0, diff=0;
	int rounded = 0;

	cin >> N;
	pair<int, int> p;
	vector<pair<int, int>> numList;
	map<int, int> numMap;
	int tmp;
	for(int i =0;i<N;i++){
		cin >> tmp;
		numMap[tmp]++;
	}

	for (map<int, int>::iterator iter = numMap.begin(); iter != numMap.end(); iter++) {
		p = make_pair(iter->first, iter->second);
		for (int i = 0; i < iter->second; i++) {
			numList.push_back(p);
			sum += iter->first;
		}
	}

	diff = numList[numList.size() - 1].first - numList[0].first;
	p = numList[((numList.size() + 1) / 2 - 1)];
	midnum = p.first;
	rounded = round(sum, N);
	sort(numList.begin(), numList.end(), cmp);
	if (numList[0].second >= numList.size()) {
		frq = numList[0].first;
	}
	else {
		if (numList[numList[0].second].second == numList[0].second) {
			frq = numList[numList[0].second].first;
		}
		else {
			frq = numList[0].first;
		}
		
	}

	//for (int i = 0; i < numList.size(); i++) {
	//	cout << i << " " << numList[i].first << ": " << numList[i].second << '\n';

	//}
	cout << rounded << '\n' << midnum << '\n' <<frq  << '\n' << diff << '\n';
	return 0;
}


/*

https://www.acmicpc.net/problem/2108

����� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� 	256 MB	144386	33618	26908	25.830%
����

���� ó���ϴ� ���� ����п��� ����� �߿��� ���̴�. ����п��� N���� ���� ��ǥ�ϴ� �⺻ ��谪���� ������ ���� �͵��� �ִ�. ��, N�� Ȧ����� ��������.

	������ : N���� ������ ���� N���� ���� ��
	�߾Ӱ� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
	�ֺ� : N���� ���� �� ���� ���� ��Ÿ���� ��
	���� : N���� ���� �� �ִ񰪰� �ּڰ��� ����

N���� ���� �־����� ��, �� ���� �⺻ ��谪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� ���� N(1 �� N �� 500,000)�� �־�����. ��, N�� Ȧ���̴�. �� ���� N���� �ٿ��� �������� �־�����. �ԷµǴ� ������ ������ 4,000�� ���� �ʴ´�.
���

ù° �ٿ��� �������� ����Ѵ�. �Ҽ��� ���� ù° �ڸ����� �ݿø��� ���� ����Ѵ�.

��° �ٿ��� �߾Ӱ��� ����Ѵ�.

��° �ٿ��� �ֺ��� ����Ѵ�. ���� �� ���� ������ �ֺ� �� �� ��°�� ���� ���� ����Ѵ�.

��° �ٿ��� ������ ����Ѵ�.
���� �Է� 1

5
1
3
8
-2
2

���� ��� 1

2
2
1
10

���� �Է� 2

1
4000

���� ��� 2

4000
4000
4000
0

���� �Է� 3

5
-1
-2
-3
-1
-2

���� ��� 3

-2
-2
-1
2

���� �Է� 4

3
0
0
-1

���� ��� 4

0
0
0
1

(0 + 0 + (-1)) / 3 = -0.333333... �̰� �̸� ù° �ڸ����� �ݿø��ϸ� 0�̴�. -0���� ����ϸ� �ȵȴ�.
��ó

	�����͸� �߰��� ���: bjh3502, bsyun0571, djm03178, jungyh1509, kongum, palilo, YunGoon
	������ ��Ÿ�� ã�� ���: jh05013, skynet

�˰��� �з�

	����
	����
	����

�޸�

�޸� �ۼ��ϱ�


*/