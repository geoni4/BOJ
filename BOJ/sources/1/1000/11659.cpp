#include <iostream>

using namespace std;

int main() {
	freopen("../../../resources/1/1000/11659.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
  cout << N << '\n';
  int* map = new int[N+1];
	for (int i = 0; i < N; i++) {
	  cin >> map[i];
    if (i == 0) continue;
		map[i] += map[i - 1];
	}
  for( int i = 0; i < M ; i++){
    int begin, end;
    cin >> begin >> end;
    int sBegin;
    if( begin <= 1){
      sBegin = 0;
    } else {
      sBegin = map[begin-2];
    }
    cout << map[end-1] - sBegin << '\n';
  }

	return 0;
}

/*

https://www.acmicpc.net/problem/11659

질문 게시판
구간 합 구하기 4
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	256 MB	95594	39362	29320	39.080%
문제
수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N과 합을 구해야 하는 횟수 M이 주어진다. 둘째 줄에는 N개의 수가 주어진다. 수는 1,000보다 작거나 같은 자연수이다. 셋째 줄부터 M개의 줄에는 합을 구해야 하는 구간 i와 j가 주어진다.

출력
총 M개의 줄에 입력으로 주어진 i번째 수부터 j번째 수까지 합을 출력한다.

제한
1 ≤ N ≤ 100,000
1 ≤ M ≤ 100,000
1 ≤ i ≤ j ≤ N
예제 입력 1 
5 3
5 4 3 2 1
1 3
2 4
5 5
예제 출력 1 
12
9
1
출처
문제를 만든 사람: baekjoon
데이터를 추가한 사람: djm03178
알고리즘 분류
누적 합
메모



*/