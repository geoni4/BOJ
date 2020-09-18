#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

bool visited[10];
int tr[10], arr[10], flag;
int isHundred()
{
	int sum = 0;
	for (int i = 0; i < 7; i++)
		sum += tr[i];
	if (sum == 100) {
		flag = 1;
		return 1;
	}
	return 0;
}

void perm(int k)
{
	if (k == 7) {
		if(isHundred())	return;
	}
	else{
		for (int i = 0; i < 9; i++){
			if (visited[i]) continue;

			tr[k] = arr[i];
			visited[i] = 1;
			perm(k + 1);
			if (flag) return;
			visited[i] = 0;
		}
	}
}

int main() {
	freopen("2309.txt", "r", stdin);
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	perm(0);
	for(int i =0; i<6; i++ )
		for (int j = i+1; j < 7; j++) {
			if (tr[i] >= tr[j]) {
				int tmp = tr[i];
				tr[i] = tr[j];
				tr[j] = tmp;
			}
		}
	for (int i = 0; i < 7; i++)
		cout << tr[i] << '\n';
	return 0;
}