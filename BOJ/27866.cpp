#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	freopen("27866.txt", "r", stdin);
	string str;
	int idx;

	cin >> str >> idx;
	cout << str.at(idx-1) << '\n';
	return 0;
}

/*

https://www.acmicpc.net/problem/27866

문자와 문자열 성공
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	1024 MB	23641	15950	14807	69.043%
문제

단어
$S$와 정수 $i$가 주어졌을 때, $S$의

$i$번째 글자를 출력하는 프로그램을 작성하시오.
입력

첫째 줄에 영어 소문자와 대문자로만 이루어진 단어
$S$가 주어진다. 단어의 길이는 최대

$1\,000$이다.

둘째 줄에 정수
$i$가 주어진다. (

$1 \le i \le \left|S\right|$)
출력

 
$S$의

$i$번째 글자를 출력한다.
예제 입력 1

Sprout
3

예제 출력 1

r

예제 입력 2

shiftpsh
6

예제 출력 2

p

예제 입력 3

Baekjoon
4

예제 출력 3

k

노트

문자열
$S$에 대해 $\left|S\right|$는

$S$의 길이를 의미한다.
출처

	문제를 검수한 사람: jh05013, kiwiyou, tlsdydaud1, wider93
	문제를 만든 사람: shiftpsh

알고리즘 분류

	구현
	문자열

메모


*/