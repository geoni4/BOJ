#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

 
int main() {

	freopen("./resources/0/2000/2738.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);

	int row, col;
	cin >> row >> col;
	int mat[100][100];

	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			cin >> mat[x][y];
		}
	}
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			int tmp=0;
			cin >> tmp;
			mat[x][y] += tmp;
		}
	}
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			cout << mat[x][y] <<' ';
		}
		cout << '\n';
	}


	return 0;
}

/*

https://www.acmicpc.net/problem/2738

행렬 덧셈
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초 	128 MB	46979	25432	22427	55.079%
문제

N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.
입력

첫째 줄에 행렬의 크기 N 과 M이 주어진다. 둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다. 이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다. N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.
출력

첫째 줄부터 N개의 줄에 행렬 A와 B를 더한 행렬을 출력한다. 행렬의 각 원소는 공백으로 구분한다.
예제 입력 1

3 3
1 1 1
2 2 2
0 1 0
3 3 3
4 4 4
5 5 100

예제 출력 1

4 4 4
6 6 6
5 6 100

출처

	문제의 오타를 찾은 사람: purpose

알고리즘 분류

	수학
	구현

메모

*/