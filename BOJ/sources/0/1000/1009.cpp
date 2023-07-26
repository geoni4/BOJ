#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
    freopen("./resources/0/1000/1009.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++) {
        int base, exp, tmp=1;
        cin >> base >> exp;
        exp %= 4;
        exp = exp == 0 ? 4 : exp;
        for (int e = 0; e < exp; e++) {
            tmp *= base;
        }
        tmp %= 10;
        if (tmp == 0) tmp = 10;
        cout << tmp << '\n';
    }

    return 0;
}

/*

https://www.acmicpc.net/problem/1009

분산처리
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	95454	22490	17910	24.367%
문제

재용이는 최신 컴퓨터 10대를 가지고 있다. 어느 날 재용이는 많은 데이터를 처리해야 될 일이 생겨서 각 컴퓨터에 1번부터 10번까지의 번호를 부여하고, 10대의 컴퓨터가 다음과 같은 방법으로 데이터들을 처리하기로 하였다.

1번 데이터는 1번 컴퓨터, 2번 데이터는 2번 컴퓨터, 3번 데이터는 3번 컴퓨터, ... ,

10번 데이터는 10번 컴퓨터, 11번 데이터는 1번 컴퓨터, 12번 데이터는 2번 컴퓨터, ...

총 데이터의 개수는 항상 ab개의 형태로 주어진다. 재용이는 문득 마지막 데이터가 처리될 컴퓨터의 번호가 궁금해졌다. 이를 수행해주는 프로그램을 작성하라.
입력

입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트 케이스에 대해 정수 a와 b가 주어진다. (1 ≤ a < 100, 1 ≤ b < 1,000,000)
출력

각 테스트 케이스에 대해 마지막 데이터가 처리되는 컴퓨터의 번호를 출력한다.
예제 입력 1

5
1 6
3 7
6 2
7 100
9 635

예제 출력 1

1
7
6
1
9

출처

    문제를 만든 사람: hellodj
    데이터를 추가한 사람: kjiwhan0120, sait2000

알고리즘 분류

    수학
    구현

메모

*/