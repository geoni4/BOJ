#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//int a = 10;
	//int* b = &a;
	//int a[4][2][3] = { {{1, 2, 3},	{4, 5, 6}},
	//					{{7, 8, 9},	{10, 11, 12}},
	//					{{13, 14, 15}, {16, 17, 18}},
	//					{{19, 20, 21}, {22, 23, 24}}
	//				};
	//
	//int* pa = a;
	//int(*ppa)[3] = a+1;
	//int(*pppa)[2][3] = a;

	//printf("     pa: %10d,      (pa+1): %10d,      (pa+2): %10d,      (pa+3): %10d\n", pa, (pa + 1), (pa + 2), (pa + 3));
	//printf("    *pa: %10d,     *(pa+1): %10d,     *(pa+2): %10d,     *(pa+3): %10d\n", *pa, *(pa + 1), *(pa + 2), *(pa + 3));
	//printf("   *ppa: %10d,    *(ppa+1): %10d,    *(ppa+2): %10d,    *(ppa+3): %10d\n", *ppa, *(ppa + 1), *(ppa + 2), *(ppa + 3));
	//printf("  **ppa: %10d,   **(ppa+1): %10d,   **(ppa+2): %10d,   **(ppa+3): %10d\n", **ppa, **(ppa + 1), **(ppa + 2), **(ppa + 3));
	//printf(" **pppa: %10d,  **(pppa+1): %10d,  **(pppa+2): %10d,  **(pppa+3): %10d\n", **pppa, **(pppa + 1), **(pppa + 2), **(pppa + 3));
	//printf("***pppa: %10d, ***(pppa+1): %10d, ***(pppa+2): %10d, ***(pppa+3): %10d\n", ***pppa, ***(pppa + 1), ***(pppa + 2), ***(pppa + 3));


	char* str[5][2] = {
		{"AB", "CD"},
		{"EF", "GH"},
		{"IJ", "KL"},
		{"MN", "OP"},
		{"QR", "ST"}
	};
	char str2[5][2][3] = {
		{{'A', 'B', '\0'}, {'C', 'D', '\0'}},
		{{'E', 'F', '\0'}, {'G', 'H', '\0'}},
		{{'I', 'J', '\0'}, {'K', 'L', '\0'}},
		{{'M', 'N', '\0'}, {'O', 'P', '\0'}},
		{{'Q', 'R', '\0'}, {'S', 'T', '\0'}}
	};

	char* pstr = **str;
	char* pstrr = *str;
	
	char(*ppstr)[2] = **str;
	char(*pppstr)[5][2] = **str;

	char* pstr2 = str2;
	char(*ppstr2)[3] = str2;
	char(*pppstr2)[2][3] = str2;

	printf("      pstr: %9d,       (pstr+1): %9d,       (pstr+2): %9d\n", pstr, (pstr + 1), (pstr + 2));
	printf("      pstr: %9s,       (pstr+1): %9s,       (pstr+2): %9s\n", pstr, (pstr + 1), (pstr + 2));
	printf("    *pstrr: %9d,     (*pstrr)+1: %9d,     (*pstrr)+2: %9d\n", *pstrr, (*pstrr) + 1, (*pstrr) + 2);
	printf("    *pstrr: %9c,     (*pstrr)+1: %9c,     (*pstrr)+2: %9c\n", *pstrr, (*pstrr) + 1, (*pstrr) + 2);
	//printf("    *ppstr: %9d,     *(ppstr+1): %9d,     *(ppstr+2): %9d\n", *ppstr, *(ppstr + 1), *(ppstr + 2));
	//printf("    *ppstr: %9s,     *(ppstr+1): %9s,     *(ppstr+2): %9s\n", *ppstr, *(ppstr + 1), *(ppstr + 2));
	//printf("  **pppstr: %9d,   **(pppstr+1): %9d,   **(pppstr+2): %9d\n", **pppstr, **(pppstr + 1), **(pppstr + 2));
	//printf("  **pppstr: %9s,   **(pppstr+1): %9s,   **(pppstr+2): %9s\n", **pppstr, **(pppstr + 1), **(pppstr + 2));

	printf("     pstr2: %9d,      (pstr2+1): %9d,      (pstr2+2): %9d\n", pstr2, (pstr2 + 1), (pstr2 + 2));
	printf("    *pstr2: %9c,     *(pstr2+1): %9c,     *(pstr2+2): %9c\n", *pstr2, *(pstr2 + 1), *(pstr2 + 2));
	printf("   *ppstr2: %9d,    *(ppstr2+1): %9d,    *(ppstr2+2): %9d\n", *ppstr2, *(ppstr2 + 1), *(ppstr2 + 2));
	printf("  **ppstr2: %9c,   **(ppstr2+1): %9c,   **(ppstr2+2): %9c\n", **ppstr2, **(ppstr2 + 1), **(ppstr2 + 2));
	printf(" **pppstr2: %9d,  **(pppstr2+1): %9d,  **(pppstr2+2): %9d\n", **pppstr2, **(pppstr2 + 1), **(pppstr2 + 2));
	printf("***pppstr2: %9c, ***(pppstr2+1): %9c, ***(pppstr2+2): %9c\n", ***pppstr2, ***(pppstr2 + 1), ***(pppstr2 + 2));

	return 0;
}