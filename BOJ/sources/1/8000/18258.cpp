#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int main() {
    freopen("./resources/1/8000/18258.txt", "r", stdin);
    cin.tie(nullptr), cout.tie(nullptr);
    ios::sync_with_stdio(false);
    string cmd;
    int N;
    cin >> N;
    queue<int> nums;
    int num;
    for (int n = 0; n < N; n++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            nums.push(num);
        }
        else if (cmd == "pop") {
            if(nums.size() != 0){
                cout << nums.front();
                nums.pop();
            }
            else
                cout << -1;
            cout << '\n';
        }
        else if (cmd == "front") {
            if (nums.size() != 0)
                cout << nums.front();
            else
                cout << -1;
            cout << '\n';
        }
        else if (cmd == "back") {
            if (nums.size() != 0)
                cout << nums.back();
            else
                cout << -1;
            cout << '\n';
        }
        else if (cmd == "size") {
            cout << nums.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << nums.empty() << '\n';
        }
    }
    return 0;
}



/*

https://www.acmicpc.net/problem/18258

큐 2
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 (하단 참고)	512 MB	75736	23848	19309	31.976%
문제

정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여섯 가지이다.

    push X: 정수 X를 큐에 넣는 연산이다.
    pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    size: 큐에 들어있는 정수의 개수를 출력한다.
    empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
    front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

입력

첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 2,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
출력

출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
예제 입력 1

15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front

예제 출력 1

1
2
2
0
1
2
-1
0
1
-1
0
3

출처

    문제를 만든 사람: jh05013

알고리즘 분류

보기
시간 제한

    Python 3: 3 초
    PyPy3: 3 초
    Python 2: 3 초
    PyPy2: 3 초

메모

*/