#include <iostream>

int fact(int a) {
	int fac;
	if (a <= 1) return 1;
	else fac = a * fact(a - 1);
	return fac;
}

int main() {
	int input;
	std::cin >> input;
	std::cout << fact(input);
	return 0;
}