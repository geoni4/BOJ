#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/0/2000/2444.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++)	cout << ' ';
		for (int j = 0; j <= i*2; j++)	cout << '*';
		cout << '\n';
	}
	for (int i = n-2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++)	cout << ' ';
		for (int j = 0; j <= i * 2; j++)	cout << '*';
		cout << '\n';
	}




	return 0;
}





/*
별 찍기 - 7
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	51945	32628	29245	63.988 %
문제

예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
입력

첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
출력

첫째 줄부터 2×N - 1번째 줄까지 차례대로 별을 출력한다.
예제 입력 1

5

예제 출력 1

*
***
*****
*******
*********
*******
*****
***
*

출처

문제를 만든 사람 : baekjoon

알고리즘 분류

구현

메모
*/