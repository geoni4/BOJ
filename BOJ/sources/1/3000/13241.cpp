#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	int tmp, n;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}


int main() {
	freopen("./resources/1/3000/13241.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);
    long long A, B, GCF, LCM;
    cin >> A >> B;
	GCF = gcd(A, B);
	LCM = A * B / GCF;
	cout << LCM << '\n';
	return 0;
}

/*

https://www.acmicpc.net/problem/13241

최소공배수 다국어
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 	512 MB	10976	6870	6357	63.864%
문제

정수 B에 0보다 큰 정수인 N을 곱해 정수 A를 만들 수 있다면, A는 B의 배수이다.

예:

    10은 5의 배수이다 (5*2 = 10)
    10은 10의 배수이다(10*1 = 10)
    6은 1의 배수이다(1*6 = 6)
    20은 1, 2, 4,5,10,20의 배수이다.

다른 예:

    2와 5의 최소공배수는 10이고, 그 이유는 2와 5보다 작은 공배수가 없기 때문이다.
    10과 20의 최소공배수는 20이다.
    5와 3의 최소공배수는 15이다.

당신은 두 수에 대하여 최소공배수를 구하는 프로그램을 작성 하는 것이 목표이다.
입력

한 줄에 두 정수 A와 B가 공백으로 분리되어 주어진다.

50%의 입력 중 A와 B는 1000(103)보다 작다. 다른 50%의 입력은 1000보다 크고 100000000(108)보다 작다.

추가: 큰 수 입력에 대하여 변수를 64비트 정수로 선언하시오. C/C++에서는 long long int를 사용하고, Java에서는 long을 사용하시오.
출력

A와 B의 최소공배수를 한 줄에 출력한다.
예제 입력 1

1 1

예제 출력 1

1

예제 입력 2

3 5

예제 출력 2

15

예제 입력 3

1 123

예제 출력 3

123

예제 입력 4

121 199

예제 출력 4

24079

출처

Olympiad > All-Ireland Programming Olympiad > 2016 AIPO National Finals 2번

    문제를 번역한 사람: n_agi
    어색한 표현을 찾은 사람: win198978

알고리즘 분류

    수학
    정수론
    유클리드 호제법

메모


*/