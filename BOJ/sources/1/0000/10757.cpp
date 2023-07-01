#include <iostream>
#include <cstring>
using namespace std;

char A[10001],B[10001];
char tmpA[10002], tmpB[10002];
char tmp_sol[10002];
char sol[10002];

int main() {
	cin >> A >> B;
	int lenA = strlen(A), lenB = strlen(B);
	for (int i = lenA-1; i >=0; i--)	tmpA[lenA - i-1] = A[i];
	for (int i = lenB - 1; i >= 0; i--)	tmpB[lenB - i - 1] = B[i];
	int len = lenA > lenB ? lenA : lenB;
	for (int i = 0; i <= len; i++) {
		if (i == len && !tmp_sol[i]) continue;
		if (i < lenA)	tmp_sol[i] += tmpA[i] - '0';
		if (i < lenB)	tmp_sol[i] += tmpB[i] - '0';
		if (tmp_sol[i] >= 10) {
			tmp_sol[i] -= 10;
			tmp_sol[i + 1] += 1;
		}
		tmp_sol[i] += '0';
	}
	
	len = strlen(tmp_sol);
	for (int i = len - 1; i >= 0; i--)	sol[len - i - 1] = tmp_sol[i];
	cout << sol;
	return 0;
}