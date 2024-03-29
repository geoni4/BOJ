#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    freopen("./resources/1/0000/10816.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int N, M, tmp;
    unordered_map<int, int> cards;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        cards[tmp]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        cout << cards[tmp] << ' ';
    }

    return 0;
}



/*

https://www.acmicpc.net/problem/10816

숫자 카드 2
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	256 MB	113920	42793	30642	36.710%
문제

숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.
입력

첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.
출력

첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.
예제 입력 1

10
6 3 2 10 10 10 -10 -10 7 3
8
10 9 -5 2 3 4 5 -10

예제 출력 1

3 0 0 1 2 0 0 2

출처

    문제를 만든 사람: baekjoon
    데이터를 추가한 사람: bumsoo0515, emppu, jh05013
    문제의 오타를 찾은 사람: cko301, mwy3055, wkd48632

알고리즘 분류

    자료 구조
    정렬
    이분 탐색
    해시를 사용한 집합과 맵

메모

*/