#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    freopen("./resources/0/1000/1269.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int A, B;
    set<int> numSet;
    cin >> A >> B;
    for (int i = 0; i < A; i++) {
        int num; cin >> num;
        numSet.insert(num);
    }
    for (int i = 0; i < B; i++) {
        int num; cin >> num;
        if (numSet.find(num) != numSet.end())   numSet.erase(num);
        else                                    numSet.insert(num);
    }
    cout << numSet.size();
    return 0;
}


/*

https://www.acmicpc.net/problem/1269

대칭 차집합
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 	256 MB	21796	13742	11406	63.796%
문제

자연수를 원소로 갖는 공집합이 아닌 두 집합 A와 B가 있다. 이때, 두 집합의 대칭 차집합의 원소의 개수를 출력하는 프로그램을 작성하시오. 두 집합 A와 B가 있을 때, (A-B)와 (B-A)의 합집합을 A와 B의 대칭 차집합이라고 한다.

예를 들어, A = { 1, 2, 4 } 이고, B = { 2, 3, 4, 5, 6 } 라고 할 때,  A-B = { 1 } 이고, B-A = { 3, 5, 6 } 이므로, 대칭 차집합의 원소의 개수는 1 + 3 = 4개이다.
입력

첫째 줄에 집합 A의 원소의 개수와 집합 B의 원소의 개수가 빈 칸을 사이에 두고 주어진다. 둘째 줄에는 집합 A의 모든 원소가, 셋째 줄에는 집합 B의 모든 원소가 빈 칸을 사이에 두고 각각 주어진다. 각 집합의 원소의 개수는 200,000을 넘지 않으며, 모든 원소의 값은 100,000,000을 넘지 않는다.
출력

첫째 줄에 대칭 차집합의 원소의 개수를 출력한다.
예제 입력 1

3 5
1 2 4
2 3 4 5 6

예제 출력 1

4

출처

    문제를 만든 사람: author5

알고리즘 분류

    자료 구조
    해시를 사용한 집합과 맵
    트리를 사용한 집합과 맵

메모

*/