#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int translate(char ch) {
    if (ch >= 'A' && ch <= 'Z')     ch -= 'A'  - 10;
    else                            ch -= '0';
    int tmp = ch;
    return tmp;
}

int main() {
	freopen("./resources/0/2000/2745.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);

    string str;
    int radix;
    int answer = 0;
    cin >> str >> radix;

    for (int i = 0; i < str.length(); i++) {
        if (i != 0) answer *= radix;
        answer += translate(str.at(i));
    }
    
    cout << answer;

	return 0;
}

/*

https://www.acmicpc.net/problem/2745

진법 변환
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	26023	13869	11775	53.177%
문제

B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
입력

첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)

B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
출력

첫째 줄에 B진법 수 N을 10진법으로 출력한다.
예제 입력 1

ZZZZZ 36

예제 출력 1

60466175

출처

    문제의 오타를 찾은 사람: bupjae

알고리즘 분류

    수학
    구현
    문자열

메모

*/