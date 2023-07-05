#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    freopen("./resources/1/1000/11478.txt", "r", stdin);
    cin.tie(NULL), ios::sync_with_stdio(false);
    string str;
    set<string> strs;
    cin >> str;
    for (int i = 0; i <= str.length()-1; i++) {
        for (int j = 1; j <= str.length(); j++) {
            string tmp_str = str.substr(i, j);
            if(strs.find(tmp_str) == strs.end())
                strs.insert(tmp_str);
        }
    }
    cout << strs.size();
    return 0;
}                                                                                                            