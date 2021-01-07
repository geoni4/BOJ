#include <iostream>
#include <cstring>
using namespace std;

char tmp[53], oper[30], num[6];
int arr[30];
int f1, f2, minus_flag, sum;
int main() {
	cin >> tmp;
	
	int len = strlen(tmp);
	for (int i = 0; i < len; i++) {
		if (tmp[i] >= '0' && tmp[i] <= '9') {
			num[f1++] = tmp[i];
		}
		if (tmp[i] == '-' || tmp[i] == '+') {
			if (tmp[i] == '-') minus_flag = 1;
			if (minus_flag) tmp[i] = '-';
			oper[f2] = tmp[i];
			arr[f2++] = atoi(num);
			memset(num, 0, sizeof(num));
			f1 = 0;
		}
	}
	arr[f2] = atoi(num);
	sum = arr[0];
	for (int i = 0; i < f2; i++) {
		if (oper[i] == '-') sum -= arr[i+1];
		if (oper[i] == '+') sum += arr[i+1];
	}
	cout << sum;
	return 0;
}