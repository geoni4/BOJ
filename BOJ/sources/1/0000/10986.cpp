#include <iostream>

using namespace std;

int main(){
  freopen("../../../resources/1/0000/10986.txt","r",stdin);
  cin.tie(nullptr), ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;

  int* numArr = new int[M];
  int* sumArr = new int[N];
  int cnt = 0;
  for(int i =0;i<N;i++){
    int tmp;
    cin >> tmp;
    if( i == 0 ) sumArr[i] = tmp%M;
    else  sumArr[i] = (sumArr[i-1]+tmp) % M; 
    numArr[sumArr[i]]++;
  }
  long value=0;
  for(int i =0;i<M;i++){
    value = numArr[i];
    if( i == 0) cnt += value * (value + 1)/2;
    else cnt += value * ( value-1 )/2;
  }
  cout <<cnt;
  return 0;
}

/*

https://www.acmicpc.net/problem/10986


나머지 합
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	256 MB	38610	10968	7947	26.975%
문제
수 N개 A1, A2, ..., AN이 주어진다. 이때, 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 구하는 프로그램을 작성하시오.

즉, Ai + ... + Aj (i ≤ j) 의 합이 M으로 나누어 떨어지는 (i, j) 쌍의 개수를 구해야 한다.

입력
첫째 줄에 N과 M이 주어진다. (1 ≤ N ≤ 106, 2 ≤ M ≤ 103)

둘째 줄에 N개의 수 A1, A2, ..., AN이 주어진다. (0 ≤ Ai ≤ 109)

출력
첫째 줄에 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 출력한다.

예제 입력 1 
5 3
1 2 3 1 2
예제 출력 1 
7
출처
문제를 만든 사람: baekjoon
데이터를 추가한 사람: cs71107
알고리즘 분류
수학
누적 합
메모


*/