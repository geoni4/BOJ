#include <string>
#include <vector>

using namespace std;
int pow(int n);
int reverseTernary(int n);

int solution(int n) {
    int answer = reverseTernary(n);
    return answer;
}
int reverseTernary(int n) {
    int result = 0;
    vector<int> str;
    while (n != 0) {
        str.push_back(n % 3);
        n = n / 3;
    }
    for (int i = 0; i < str.size(); i++) {
        result += str[str.size() - i - 1] * pow(i);
    }
    return result;
}
int pow(int n) {
    int tmp = 1;
    for (int i = 0; i < n; i++) {
        tmp *= 3;
    }
    return tmp;
}