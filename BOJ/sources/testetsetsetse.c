#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//int a = 10;
	//int* b = &a;
	int a[4][2][3] = { {{1, 2, 3},	{4, 5, 6}},
						{{7, 8, 9},	{10, 11, 12}},
						{{13, 14, 15}, {16, 17, 18}},
						{{19, 20, 21}, {22, 23, 24}}
					};
	
	int* pa = a;
	int(*ppa)[2] = a+1;
	int(*pppa)[2][3] = (*(*a+1)+1)+1;

	printf("pa: %d, (pa+1): %d, (pa+2): %d, (pa+3): %d\n", pa, (pa + 1), (pa + 2), (pa + 3));
	printf("*pa: %d, *(pa+1): %d, *(pa+2): %d, *(pa+3): %d\n", *pa, *(pa + 1), *(pa + 2), *(pa + 3));
	printf("*ppa: %d, *(ppa+1): %d, *(ppa+2): %d, *(ppa+3): %d\n", *ppa, *(ppa + 1), *(ppa + 2), *(ppa + 3));
	printf("**ppa: %d, **(ppa+1): %d, **(ppa+2): %d, **(ppa+3): %d\n", **ppa, **(ppa + 1), **(ppa + 2), **(ppa + 3));
	printf("**pppa: %d, **(pppa+1): %d, **(pppa+2): %d, **(pppa+3): %d\n", **pppa, **(pppa + 1), **(pppa + 2), **(pppa + 3));
	printf("***pppa: %d, ***(pppa+1): %d, ***(pppa+2): %d, ***(pppa+3): %d\n", ***pppa, ***(pppa + 1), ***(pppa + 2), ***(pppa + 3));
	return 0;
}