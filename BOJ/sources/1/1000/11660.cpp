#include <iostream>

using namespace std;

int main(){
  cin.tie(nullptr), ios::sync_with_stdio(false);
  freopen("../../../resources/1/1000/11660.txt", "r", stdin);
  
  int N, M;
  cin >> N >> M;
  int** map = new int*[N+1];
  for(int i =0;i<=N;i++){
    map[i] = new int[N+1];
  }
  for(int i =0;i<=N;i++){
    for(int j =0;j<=N;j++){
      int tmp;
      if(i == 0 || j == 0) continue;
      cin >> tmp;
      map[i][j] = map[i][j-1] + tmp; 
    }
  }


  for(int i =0;i<=N;i++){
    for(int j =0;j<=N;j++){
      cout << map[i][j] << ' ';
    }
    cout << '\n';
  }
  int x1, x2, y1, y2;
  for(int m = 0; m<M;m++){
    int sum =0;
    cin >> y1 >> x1 >> y2 >> x2;
    for(int i =y1 ;i<=y2;i++){
      sum += (map[i][x2] - map[i][x1-1]);
    }
    cout << sum <<'\n';
  }

  return 0;
}