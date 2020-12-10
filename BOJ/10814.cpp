#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct _Member {
	int age;
	char name[101];
	int no;
}Member;



bool cmp(Member &a, Member &b) {
	if (a.age == b.age) {
		if (a.no < b.no) return 1;
		if (a.no > b.no) return 0;
	}
	return a.age < b.age;
}

int main() {
	int n;
	cin.tie(0), ios::sync_with_stdio(0);
	freopen("10814.txt", "r", stdin);
	cin >> n;
	
	Member* member = new Member[n];

	for (int i = 0; i < n; i++) {
		cin >> member[i].age >> member[i].name;
		member[i].no = i;
	}

	sort(member, member + n, cmp);

	for (int i = 0; i < n; i++)
		cout << member[i].age << " " << member[i].name << '\n';

	delete member;
	return 0;
}
