#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int X, N=0,i=0,num,denom;
	cin >> X;
	for (i = 1; X > N; i++) N = (i + 1) * i / 2;
	i--;
	if (!(i % 2)) 	denom = N - X + 1, num = X - N + i;
	if (i % 2)	num = N - X + 1, denom = X - N + i;
	cout << num << "/" << denom;
	return 0;
}