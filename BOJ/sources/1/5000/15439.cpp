#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/1/5000/15439.txt", "r", stdin);
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N;
	cin >> N;
	cout << N * (N - 1);

	return 0;
}

/*

https://www.acmicpc.net/problem/15439

베라의 패션 성공다국어
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 	256 MB	7539	6613	6337	88.100%
문제

베라는 상의 N 벌과 하의 N 벌이 있다. i 번째 상의와 i 번째 하의는 모두 색상 i를 가진다. N 개의 색상은 모두 서로 다르다.

상의와 하의가 서로 다른 색상인 조합은 총 몇 가지일까?
입력

입력은 아래와 같이 주어진다.

N

출력

상의와 하의가 서로 다른 색상인 조합의 가짓수를 출력한다.
제한

	1 ≤ N ≤ 2017
	N은 정수이다.

예제 입력 1

1

예제 출력 1

0

예제 입력 2

2

예제 출력 2

2

예제 입력 3

5

예제 출력 3

20

출처

Contest > Waterloo's local Programming Contests > 4 March, 2017 A번

	문제를 번역한 사람: kiwiyou

알고리즘 분류

	수학
	구현
	조합론

메모

*/