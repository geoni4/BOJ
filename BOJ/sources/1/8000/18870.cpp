#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <Vector>
using namespace std;

int main() {
	freopen("./resources/1/8000/18870.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<int> numVec;
	vector<int> numVec2;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		numVec.push_back(n);	//원본
		numVec2.push_back(n);	//정렬 기준
	}

	// 정렬
	sort(numVec2.begin(), numVec2.end());

	//중복값 없애기
	numVec2.erase(unique(numVec2.begin(), numVec2.end()), numVec2.end());

	
	for (int i = 0; i < numVec.size(); i++) {
		// lower_bound 함수는 iterator를 반환한다.(포인터)
		// numVec[i]값이 처음 나오는 위치를 numVec2.begin()부터 numVec2.end()까지 찾는다.
		// begin() 포인터를 찾아서 빼줘야한다.
		cout << lower_bound(numVec2.begin(), numVec2.end(), numVec[i]) - numVec2.begin() << ' ';
	}
	cout << '\n';
	return 0;
}


/*

https://www.acmicpc.net/problem/18870

좌표 압축
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 	512 MB	68308	28715	21909	39.745%
문제

수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표 Xj의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.
입력

첫째 줄에 N이 주어진다.

둘째 줄에는 공백 한 칸으로 구분된 X1, X2, ..., XN이 주어진다.
출력

첫째 줄에 X'1, X'2, ..., X'N을 공백 한 칸으로 구분해서 출력한다.
제한

	1 ≤ N ≤ 1,000,000
	-109 ≤ Xi ≤ 109

예제 입력 1

5
2 4 -10 4 -9

예제 출력 1

2 3 0 3 1

예제 입력 2

6
1000 999 1000 999 1000 999

예제 출력 2

1 0 1 0 1 0

출처

	문제의 오타를 찾은 사람: abel1802
	문제를 만든 사람: baekjoon

알고리즘 분류

	정렬
	값 / 좌표 압축

메모

*/