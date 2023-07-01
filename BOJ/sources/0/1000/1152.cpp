#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int cnt =0, length = 0;
	char str[1000000];
	freopen("./resources/0/1000/1152.txt", "r", stdin);
	scanf("%[^\n]s", str);
	for (int i = 0; str[i]; i++)	length++;

	for (int i = 0; i < length; i++) {
		if (i == 0) {
			if( str[i] != ' ')		cnt++;
		}
		else {
			if (str[i - 1] == ' ' && str[i] != ' ')	cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}