#include <iostream>
using namespace std;

#define PI 3.1415926535897932384626433832795
int main() {
	double num; cout << fixed;
	cout.precision(12);
	
	cin >> num;
	cout << num * num * PI << '\n' << num * num * 2.0;
	return 0;
}