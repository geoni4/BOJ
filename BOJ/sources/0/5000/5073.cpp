#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


string kinds(int d_one, int d_two, int d_three) {
	string str = "Invalid";
	int max_len = d_one;
	max_len = max_len > d_two ? max_len : d_two;
	max_len = max_len > d_three ? max_len : d_three;
	int valid =  d_one + d_two + d_three - max_len*2;
	if (valid <=0) return str;
	int cnt = 0;
	if (d_one == d_two && d_two == d_three) {
		cnt = 3;
	}
	else if (d_one == d_two || d_two == d_three || d_three == d_one) {
		cnt = 2;
	}

	if (cnt == 0) {
		str = "Scalene";
	}
	else if (cnt == 2) {
		str = "Isosceles";
	}
	else if (cnt == 3) {
		str = "Equilateral";
	}
	return str;
}

int main() {
	freopen("./resources/0/5000/5073.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	while (1) {
		int d_one, d_two, d_three;
		cin >> d_one >> d_two >> d_three;
		if (d_one == 0 && d_two == 0 && d_two == 0) break;	
		cout << kinds(d_one, d_two, d_three) << '\n';

	}
	return 0;
}


/*

https://www.acmicpc.net/problem/5073

삼각형과 세 변 다국어
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	14553	7194	6650	50.888%
문제

삼각형의 세 변의 길이가 주어질 때 변의 길이에 따라 다음과 같이 정의한다.

	Equilateral :  세 변의 길이가 모두 같은 경우
	Isosceles : 두 변의 길이만 같은 경우
	Scalene : 세 변의 길이가 모두 다른 경우

단 주어진 세 변의 길이가 삼각형의 조건을 만족하지 못하는 경우에는 "Invalid" 를 출력한다. 예를 들어 6, 3, 2가 이 경우에 해당한다. 가장 긴 변의 길이보다 나머지 두 변의 길이의 합이 길지 않으면 삼각형의 조건을 만족하지 못한다.

세 변의 길이가 주어질 때 위 정의에 따른 결과를 출력하시오.
입력

각 줄에는 1,000을 넘지 않는 양의 정수 3개가 입력된다. 마지막 줄은 0 0 0이며 이 줄은 계산하지 않는다.
출력

각 입력에 맞는 결과 (Equilateral, Isosceles, Scalene, Invalid) 를 출력하시오.
예제 입력 1

7 7 7
6 5 4
3 2 5
6 2 6
0 0 0

예제 출력 1

Equilateral
Scalene
Invalid
Isosceles

출처

ICPC > Regionals > South Pacific > South Pacific Region > New Zealand Programming Contest > NZPC 2012 B번

	문제의 오타를 찾은 사람: corea, lety
	잘못된 번역을 찾은 사람: jh05013
	문제를 번역한 사람: john6014
	잘못된 데이터를 찾은 사람: kookmin20103324

알고리즘 분류

	수학
	구현
	기하학

메모



*/