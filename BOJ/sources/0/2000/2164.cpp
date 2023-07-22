#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/0/2000/2164.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int value, result=0;
	cin >> value;
	int smaller = 2, bigger = 4;
	if (value == 1 || value == 2) {
		result = value;
		cout <<  result;
		return 0;
	}
		
	while (1) {
		if (value <= bigger) {
			int tmp = value - smaller;
			result = tmp * 2;
			break;
		}
		smaller *= 2, bigger *= 2;
	}
	cout << result;
	return 0;
}


/*

https://www.acmicpc.net/problem/2164

카드2
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 (추가 시간 없음) 	128 MB	90895	46563	37305	50.921%
문제

N장의 카드가 있다. 각각의 카드는 차례로 1부터 N까지의 번호가 붙어 있으며, 1번 카드가 제일 위에, N번 카드가 제일 아래인 상태로 순서대로 카드가 놓여 있다.

이제 다음과 같은 동작을 카드가 한 장 남을 때까지 반복하게 된다. 우선, 제일 위에 있는 카드를 바닥에 버린다. 그 다음, 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.

예를 들어 N=4인 경우를 생각해 보자. 카드는 제일 위에서부터 1234 의 순서로 놓여있다. 1을 버리면 234가 남는다. 여기서 2를 제일 아래로 옮기면 342가 된다. 3을 버리면 42가 되고, 4를 밑으로 옮기면 24가 된다. 마지막으로 2를 버리고 나면, 남는 카드는 4가 된다.

N이 주어졌을 때, 제일 마지막에 남게 되는 카드를 구하는 프로그램을 작성하시오.
입력

첫째 줄에 정수 N(1 ≤ N ≤ 500,000)이 주어진다.
출력

첫째 줄에 남게 되는 카드의 번호를 출력한다.
예제 입력 1

6

예제 출력 1

4

알고리즘 분류

	자료 구조
	큐

메모	

*/