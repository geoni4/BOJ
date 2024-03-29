#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
using namespace std;



int main() {
    freopen("./resources/1/4000/14425.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    int N, M;

    set<string> strSet;
    string str;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        str = "";
        cin >> str;
        strSet.insert(str);
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
        str = "";
        cin >> str;
        set<string>::iterator iter = strSet.find(str);

        if (iter != strSet.end()) {
            strSet.erase(iter);
            count++;
        }
    }
    cout << count;
    return 0;
}



/*

https://www.acmicpc.net/problem/14425

문자열 집합
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 (하단 참고)	1536 MB	35497	19178	14490	53.782%
문제

총 N개의 문자열로 이루어진 집합 S가 주어진다.

입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이 총 몇 개인지 구하는 프로그램을 작성하시오.
입력

첫째 줄에 문자열의 개수 N과 M (1 ≤ N ≤ 10,000, 1 ≤ M ≤ 10,000)이 주어진다.

다음 N개의 줄에는 집합 S에 포함되어 있는 문자열들이 주어진다.

다음 M개의 줄에는 검사해야 하는 문자열들이 주어진다.

입력으로 주어지는 문자열은 알파벳 소문자로만 이루어져 있으며, 길이는 500을 넘지 않는다. 집합 S에 같은 문자열이 여러 번 주어지는 경우는 없다.
출력

첫째 줄에 M개의 문자열 중에 총 몇 개가 집합 S에 포함되어 있는지 출력한다.
예제 입력 1

5 11
baekjoononlinejudge
startlink
codeplus
sundaycoding
codingsh
baekjoon
codeplus
codeminus
startlink
starlink
sundaycoding
codingsh
codinghs
sondaycoding
startrink
icerink

예제 출력 1

4

출처

    문제를 만든 사람: baekjoon
    데이터를 추가한 사람: djm03178, jaeyoon8783, qwe123rt45, solarmagic, tongnamuu
    문제의 오타를 찾은 사람: Green55

알고리즘 분류

    자료 구조
    문자열
    해시를 사용한 집합과 맵
    트리를 사용한 집합과 맵

시간 제한

    Java 8: 6 초
    Java 8 (OpenJDK): 6 초
    Java 11: 6 초
    Kotlin (JVM): 6 초

메모

*/