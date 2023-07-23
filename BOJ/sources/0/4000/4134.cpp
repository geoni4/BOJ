#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

bool isPrime(long long num) {
    for (long long i = 2;i*i <= num;i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    freopen("./resources/0/4000/4134.txt", "r", stdin);
    cin.tie(nullptr), ios::sync_with_stdio(false);
    int N;
    long long s;
    cin >> N;

    for (int n = 0; n < N; n++) {
        cin >> s;
        if (s <= 1) s = 2;
        for (long long i = s; i < 2 * s; i++) {
            if (isPrime(i)) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}





/*

https://www.acmicpc.net/problem/4134

다음 소수 다국어
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	12336	3324	2631	25.993%
문제

정수 n(0 ≤ n ≤ 4*109)가 주어졌을 때, n보다 크거나 같은 소수 중 가장 작은 소수 찾는 프로그램을 작성하시오.
입력

첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 정수 n이 주어진다.
출력

각각의 테스트 케이스에 대해서 n보다 크거나 같은 소수 중 가장 작은 소수를 한 줄에 하나씩 출력한다.
예제 입력 1

3
6
20
100

예제 출력 1

7
23
101

출처

Contest > Waterloo's local Programming Contests > 15 July, 2012 B번

    문제를 번역한 사람: baekjoon

알고리즘 분류

    수학
    브루트포스 알고리즘
    정수론
    소수 판정

메모

*/