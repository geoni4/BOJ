#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


char translate(int num) {
	if (num >= 10)	return num + 'A' - 10;
	else			return num + '0';
}


int main() {

	freopen("./resources/1/1000/11005.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);

	int num, radix, len=0;
	char chArr[33] = { 0 };
	cin >> num >> radix;

	for (int i = 0; num > 0; i++) {
		chArr[i] = translate(num % radix);
		num = num / radix;
		len++;
	}
	for (int i = len-1; i>=0; i--) {
		cout << chArr[i];
	}


	return 0;
}

/*

https://www.acmicpc.net/problem/11005

진법 변환 2 성공
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
0.5 초 (추가 시간 없음) 	256 MB	24758	12250	10418	49.718%
문제

10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
입력

첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.
출력

첫째 줄에 10진법 수 N을 B진법으로 출력한다.
예제 입력 1

60466175 36

예제 출력 1

ZZZZZ

출처

	문제를 만든 사람: baekjoon
	데이터를 추가한 사람: du9172
	문제의 오타를 찾은 사람: zmtn94

알고리즘 분류

	수학
	구현

메모

*/