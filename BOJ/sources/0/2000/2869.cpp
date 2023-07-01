#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main() {
	int A, B, V, res = 1;
	std::cin >> A >> B >> V;
	if (A < V)	res += (V - A) / (A - B);
	if (((V - A) % (A - B))) res += 1;
	std::cout << res;
	return 0;
}