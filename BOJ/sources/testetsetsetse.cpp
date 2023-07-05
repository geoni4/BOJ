#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//int a = 10;
	//int* b = &a;
	int a[4] = { 1, 5, 2, 3 };
	//printf("%d", a);
	int b[4] = { 1, 4, 2, 3 };
	int* pa = a;
	int* pb = b;

	return 0;
}