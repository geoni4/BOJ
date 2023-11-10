#include <iostream>
#include <deque>

using namespace std;

int main(){
  freopen("../../../resources/2/8000/28279.txt", "r", stdin);
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int test_case;
  cin >> test_case;
  deque<int> d_list;
  for(int t= 0; t<test_case;t++){
    int cmd;
    cin >> cmd;
    if(cmd == 1){
      int value; cin >> value;
      d_list.push_front(value);
    } else if (cmd == 2){
      int value; cin >> value;
      d_list.push_back(value);
    } else if (cmd == 3){
      if(d_list.empty()){
        cout << "-1\n";
      } else{
        cout << d_list.front() << '\n';
        d_list.pop_front();
      }
    } else if (cmd == 4){
      if(d_list.empty()){
        cout << "-1\n";
      } else{
        cout << d_list.back() << '\n';
        d_list.pop_back();
      }
    } else if (cmd == 5){
      cout << d_list.size() << '\n';
    } else if (cmd == 6){
      if(d_list.empty()){
        cout << "1\n";
      } else{
        cout << "0\n";
      }
    } else if (cmd == 7){
      if(d_list.empty()){
        cout << "-1\n";
      } else{
        cout << d_list.front() << '\n';
      }
    } else if (cmd == 8){
      if(d_list.empty()){
        cout << "-1\n";
      } else{
        cout << d_list.back() << '\n';
      }
    }
  }

  return 0;
}





/*

https://www.acmicpc.net/problem/28279

덱 2
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
2 초	1024 MB	4561	2338	2053	52.226%
문제
정수를 저장하는 덱을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

1 X: 정수 X를 덱의 앞에 넣는다. (1 ≤ X ≤ 100,000)
2 X: 정수 X를 덱의 뒤에 넣는다. (1 ≤ X ≤ 100,000)
3: 덱에 정수가 있다면 맨 앞의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
4: 덱에 정수가 있다면 맨 뒤의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
5: 덱에 들어있는 정수의 개수를 출력한다.
6: 덱이 비어있으면 1, 아니면 0을 출력한다.
7: 덱에 정수가 있다면 맨 앞의 정수를 출력한다. 없다면 -1을 대신 출력한다.
8: 덱에 정수가 있다면 맨 뒤의 정수를 출력한다. 없다면 -1을 대신 출력한다.
입력
첫째 줄에 명령의 수 N이 주어진다. (1 ≤ N ≤ 1,000,000)

둘째 줄부터 N개 줄에 명령이 하나씩 주어진다.

출력을 요구하는 명령은 하나 이상 주어진다.

출력
출력을 요구하는 명령이 주어질 때마다 명령의 결과를 한 줄에 하나씩 출력한다.

예제 입력 1 
11
6
1 3
1 8
7
8
3
2 5
1 2
5
4
4
예제 출력 1 
1
8
3
8
3
5
3
출처
문제를 만든 사람: kiwiyou
문제를 검수한 사람: sorohue, ufshg, wapas, wider93, yup0927
알고리즘 분류
자료 구조
덱
메모

*/