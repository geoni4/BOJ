#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;


int getGCD(int big, int small) {
	int n;
	if (big < small) {
		int tmp = big;
		big = small;
		small = tmp;
	}
	while (1) {
		n = small;
		if (big % n == 0) break;
		small = big % n;
		big = n;
	}
	
	return n;
}

int main() {
	freopen("./resources/0/2000/2485.txt", "r", stdin);
	cin.tie(nullptr), ios::sync_with_stdio(false);
	vector<int> trees;
	int tmp=0, prev=0, N, cnt=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (i != 0) trees.push_back(tmp - prev);
		prev = tmp;
	}
	int gcd = trees[0];
	for (int i= 0; i < trees.size(); i++) {
		gcd = getGCD(trees[i], gcd);
	}
	for (int i = 0; i < trees.size(); i++) {
		cnt += trees[i] / gcd;
	}
	cout << cnt - trees.size();
	return 0;
}


/*

https://www.acmicpc.net/problem/2485

가로수 성공
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	11579	5273	4218	45.689%
문제

직선으로 되어있는 도로의 한 편에 가로수가 임의의 간격으로 심어져있다. KOI 시에서는 가로수들이 모두 같은 간격이 되도록 가로수를 추가로 심는 사업을 추진하고 있다. KOI 시에서는 예산문제로 가능한 한 가장 적은 수의 나무를 심고 싶다.

편의상 가로수의 위치는 기준점으로 부터 떨어져 있는 거리로 표현되며, 가로수의 위치는 모두 양의 정수이다.

예를 들어, 가로수가 (1, 3, 7, 13)의 위치에 있다면 (5, 9, 11)의 위치에 가로수를 더 심으면 모든 가로수들의 간격이 같게 된다. 또한, 가로수가 (2, 6, 12, 18)에 있다면 (4, 8, 10, 14, 16)에 가로수를 더 심어야 한다.

심어져 있는 가로수의 위치가 주어질 때, 모든 가로수가 같은 간격이 되도록 새로 심어야 하는 가로수의 최소수를 구하는 프로그램을 작성하라. 단, 추가되는 나무는 기존의 나무들 사이에만 심을 수 있다.
입력

첫째 줄에는 이미 심어져 있는 가로수의 수를 나타내는 하나의 정수 N이 주어진다(3 ≤ N ≤ 100,000). 둘째 줄부터 N개의 줄에는 각 줄마다 심어져 있는 가로수의 위치가 양의 정수로 주어지며, 가로수의 위치를 나타내는 정수는 1,000,000,000 이하이다. 가로수의 위치를 나타내는 정수는 모두 다르다.
출력

모든 가로수가 같은 간격이 되도록 새로 심어야 하는 가로수의 최소수를 첫 번째 줄에 출력한다.
예제 입력 1

4
1
3
7
13

예제 출력 1

3

예제 입력 2

4
2
6
12
18

예제 출력 2

5

출처

Olympiad > 한국정보올림피아드 > 한국정보올림피아드시․도지역본선 > 지역본선 2010 > 고등부 2번
알고리즘 분류

	수학
	정수론
	유클리드 호제법

메모

*/