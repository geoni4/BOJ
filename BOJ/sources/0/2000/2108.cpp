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

통계학 실패
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 	256 MB	144386	33618	26908	25.830%
문제

수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

	산술평균 : N개의 수들의 합을 N으로 나눈 값
	중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
	최빈값 : N개의 수들 중 가장 많이 나타나는 값
	범위 : N개의 수들 중 최댓값과 최솟값의 차이

N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.
입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.
출력

첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.
예제 입력 1

5
1
3
8
-2
2

예제 출력 1

2
2
1
10

예제 입력 2

1
4000

예제 출력 2

4000
4000
4000
0

예제 입력 3

5
-1
-2
-3
-1
-2

예제 출력 3

-2
-2
-1
2

예제 입력 4

3
0
0
-1

예제 출력 4

0
0
0
1

(0 + 0 + (-1)) / 3 = -0.333333... 이고 이를 첫째 자리에서 반올림하면 0이다. -0으로 출력하면 안된다.
출처

	데이터를 추가한 사람: bjh3502, bsyun0571, djm03178, jungyh1509, kongum, palilo, YunGoon
	문제의 오타를 찾은 사람: jh05013, skynet

알고리즘 분류

	수학
	구현
	정렬

메모

메모 작성하기


*/