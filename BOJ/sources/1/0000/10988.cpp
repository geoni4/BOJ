#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
    freopen("./resources/1/0000/10988.txt", "r", stdin);
    cin.tie(0), ios::sync_with_stdio(0);
    string str;

    cin >> str;
    bool answer = 0;
    int low = 0, high = str.length()-1;
    while(1){
        if (low >= high) {
            answer = 1;
            break;
        } 
        if (str.at(low) == str.at(high)) {
            low++; high--;
        }
        else break;
    }
    
    cout << answer << '\n';

    return 0;
}







/*

https://www.acmicpc.net/problem/10988


팰린드롬인지 확인하기
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	256 MB	38793	24638	21314	64.553%
문제

알파벳 소문자로만 이루어진 단어가 주어진다. 이때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.

팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다.

level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.
입력

첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.
출력

첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다.
예제 입력 1

level

예제 출력 1

1

예제 입력 2

baekjoon

예제 출력 2

0

출처

    문제를 만든 사람: baekjoon
    데이터를 추가한 사람: oopar2, pda_pro12

알고리즘 분류

    구현
    문자열

메모


*/