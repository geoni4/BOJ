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

��� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	128 MB	46979	25432	22427	55.079%
����

N*Mũ���� �� ��� A�� B�� �־����� ��, �� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ����� ũ�� N �� M�� �־�����. ��° �ٺ��� N���� �ٿ� ��� A�� ���� M���� ���ʴ�� �־�����. �̾ N���� �ٿ� ��� B�� ���� M���� ���ʴ�� �־�����. N�� M�� 100���� �۰ų� ����, ����� ���Ҵ� ������ 100���� �۰ų� ���� �����̴�.
���

ù° �ٺ��� N���� �ٿ� ��� A�� B�� ���� ����� ����Ѵ�. ����� �� ���Ҵ� �������� �����Ѵ�.
���� �Է� 1

3 3
1 1 1
2 2 2
0 1 0
3 3 3
4 4 4
5 5 100

���� ��� 1

4 4 4
6 6 6
5 6 100

��ó

	������ ��Ÿ�� ã�� ���: purpose

�˰��� �з�

	����
	����

�޸�

*/