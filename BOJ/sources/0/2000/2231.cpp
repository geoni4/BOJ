#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/0/2000/2231.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int N, sum, k, answer=0;
	cin >> N;
	for (int n = 1; n <= N; n++) {
		k = n;
		sum = k;
		while (1) {
			if (k % 10) sum += k % 10;
			if (k == 0) break;
			k /= 10;
		}
		if (sum == N) {
			answer = n;
			break;
		}
	}
	cout << answer;
	return 0;
}


/*

https://www.acmicpc.net/problem/2231

분해합 실패다국어
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초 	192 MB	126955	58501	45993	45.357%
문제

어떤 자연수 N이 있을 때, 그 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합을 의미한다. 어떤 자연수 M의 분해합이 N인 경우, M을 N의 생성자라 한다. 예를 들어, 245의 분해합은 256(=245+2+4+5)이 된다. 따라서 245는 256의 생성자가 된다. 물론, 어떤 자연수의 경우에는 생성자가 없을 수도 있다. 반대로, 생성자가 여러 개인 자연수도 있을 수 있다.

자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오.
입력

첫째 줄에 자연수 N(1 ≤ N ≤ 1,000,000)이 주어진다.
출력

첫째 줄에 답을 출력한다. 생성자가 없는 경우에는 0을 출력한다.
예제 입력 1

216

예제 출력 1

198

출처

ICPC > Regionals > Asia Pacific > Korea > Asia Regional - Seoul 2005 B번

	데이터를 추가한 사람: kimtree97, lambda, minju1307, yjwr0528

알고리즘 분류

	브루트포스 알고리즘

메모

*/