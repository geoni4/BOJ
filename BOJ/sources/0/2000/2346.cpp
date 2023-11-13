#include <iostream>
#include <deque>

using namespace std;


int main(){
  cin.tie(nullptr), ios::sync_with_stdio(false);
  freopen("../../../resources/0/2000/2346.txt", "r", stdin);

  int N;

  cin >> N;
  deque< pair<int, int> > d_numList;
  for(int n = 0 ; n<N ; n++){
    pair<int, int> p;
    cin >> p.second;
    p.first = n+1;
    d_numList.push_back(p);
  }
  int direction = -1;
  int value = 1;
  while(1){
    if(d_numList.size() == 0) break;
    if(value > 0){
      d_numList.push_back(d_numList.front());
      d_numList.pop_front();
      value--;
      direction = -1;
    } else if(value < 0){
      d_numList.push_front(d_numList.back());
      d_numList.pop_back();
      value++;
      direction = 1;
    } else{
      if(direction == -1){
        cout << d_numList.back().first << ' ';
        value = d_numList.back().second;
        d_numList.pop_back();
      } else if(direction == 1){
        cout << d_numList.front().first << ' ';
        value = d_numList.front().second;
        d_numList.pop_front();
      }
    }
  }
  return 0;
}

/*


풍선 터뜨리기
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초	4 MB	21264	8725	7007	42.765%
문제
1번부터 N번까지 N개의 풍선이 원형으로 놓여 있고. i번 풍선의 오른쪽에는 i+1번 풍선이 있고, 왼쪽에는 i-1번 풍선이 있다. 단, 1번 풍선의 왼쪽에 N번 풍선이 있고, N번 풍선의 오른쪽에 1번 풍선이 있다. 각 풍선 안에는 종이가 하나 들어있고, 종이에는 -N보다 크거나 같고, N보다 작거나 같은 정수가 하나 적혀있다. 이 풍선들을 다음과 같은 규칙으로 터뜨린다.

우선, 제일 처음에는 1번 풍선을 터뜨린다. 다음에는 풍선 안에 있는 종이를 꺼내어 그 종이에 적혀있는 값만큼 이동하여 다음 풍선을 터뜨린다. 양수가 적혀 있을 경우에는 오른쪽으로, 음수가 적혀 있을 때는 왼쪽으로 이동한다. 이동할 때에는 이미 터진 풍선은 빼고 이동한다.

예를 들어 다섯 개의 풍선 안에 차례로 3, 2, 1, -3, -1이 적혀 있었다고 하자. 이 경우 3이 적혀 있는 1번 풍선, -3이 적혀 있는 4번 풍선, -1이 적혀 있는 5번 풍선, 1이 적혀 있는 3번 풍선, 2가 적혀 있는 2번 풍선의 순서대로 터지게 된다.

입력
첫째 줄에 자연수 N(1 ≤ N ≤ 1,000)이 주어진다. 다음 줄에는 차례로 각 풍선 안의 종이에 적혀 있는 수가 주어진다. 종이에 0은 적혀있지 않다.

출력
첫째 줄에 터진 풍선의 번호를 차례로 나열한다.

예제 입력 1
5
3 2 1 -3 -1
예제 출력 1
1 4 5 3 2
출처
잘못된 데이터를 찾은 사람: tncks0121
알고리즘 분류
자료 구조
덱
메모

*/