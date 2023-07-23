#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.second == b.second) {
        if (a.first.length() == b.first.length()) {
            return a.first < b.first;
        }
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main() {
    freopen("./resources/2/0000/20920.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    map<string, int> words;
    vector<pair<string, int>> v_words;
    int N, length;
    cin >> N >> length;
    for (int n = 0; n < N; n++) {
        string tmp_str;
        cin >> tmp_str;
        if (tmp_str.length() < length) continue;
        words[tmp_str]++;

    }

    v_words = vector<pair<string, int>>(words.begin(), words.end());
    sort(v_words.begin(), v_words.end(), cmp);

    for (int i = 0; i < v_words.size(); i++) {
        cout << v_words[i].first << '\n';
    }

    return 0;

}






/*

https://www.acmicpc.net/problem/20920

영단어 암기는 괴로워
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 (추가 시간 없음) 	1024 MB	7947	3586	2775	45.671%
문제

화은이는 이번 영어 시험에서 틀린 문제를 바탕으로 영어 단어 암기를 하려고 한다. 그 과정에서 효율적으로 영어 단어를 외우기 위해 영어 단어장을 만들려 하고 있다. 화은이가 만들고자 하는 단어장의 단어 순서는 다음과 같은 우선순위를 차례로 적용하여 만들어진다.

    자주 나오는 단어일수록 앞에 배치한다.
    해당 단어의 길이가 길수록 앞에 배치한다.
    알파벳 사전 순으로 앞에 있는 단어일수록 앞에 배치한다

 
$M$보다 짧은 길이의 단어의 경우 읽는 것만으로도 외울 수 있기 때문에 길이가

$M$이상인 단어들만 외운다고 한다. 화은이가 괴로운 영단어 암기를 효율적으로 할 수 있도록 단어장을 만들어 주자.
입력

첫째 줄에는 영어 지문에 나오는 단어의 개수
$N$과 외울 단어의 길이 기준이 되는 $M$이 공백으로 구분되어 주어진다. ($1 \leq N \leq 100\,000$,

$1 \leq M \leq 10$)

둘째 줄부터
$N+1$번째 줄까지 외울 단어를 입력받는다. 이때의 입력은 알파벳 소문자로만 주어지며 단어의 길이는

$10$을 넘지 않는다.

단어장에 단어가 반드시 1개 이상 존재하는 입력만 주어진다.
출력

화은이의 단어장에 들어 있는 단어를 단어장의 앞에 위치한 단어부터 한 줄에 한 단어씩 순서대로 출력한다.
예제 입력 1

7 4
apple
ant
sand
apple
append
sand
sand

예제 출력 1

sand
apple
append

예제 입력 2

12 5
appearance
append
attendance
swim
swift
swift
swift
mouse
wallet
mouse
ice
age

예제 출력 2

swift
mouse
appearance
attendance
append
wallet

노트

다음과 같이 사용하면 입출력을 좀 더 빠르게 사용할 수 있다.

    C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자. 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
    Java를 사용하고 있다면, Scanner와 System.out.println 대신 BufferedReader와 BufferedWriter를 사용할 수 있다. BufferedWriter.flush는 맨 마지막에 한 번만 하면 된다.
    Python을 사용하고 있다면, input 대신 sys.stdin.readline을 사용할 수 있다. 단, 이때는 맨 끝의 개행문자까지 같이 입력받기 때문에 문자열을 저장하고 싶을 경우 .rstrip()을 추가로 해 주는 것이 좋다. 마지막으로, Pypy3은 Python 3와 같은 문법을 가지면서 일반적으로 더 빠르게 동작한다. 연산량이 많은 문제에서 Python을 사용하고자 한다면 Pypy로 제출하는 것을 권장한다.

출처

Camp > ICPC Sinchon Algorithm Camp > 2021 ICPC Sinchon Winter Algorithm Camp Contest > 초급 A번

    문제를 검수한 사람: gratus907, iknoom1107, jwvg0425, tony9402
    문제를 만든 사람: whaeun25

알고리즘 분류

    자료 구조
    문자열
    정렬
    해시를 사용한 집합과 맵
    트리를 사용한 집합과 맵

메모

*/