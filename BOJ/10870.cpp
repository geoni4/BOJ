#include <iostream>

int memo[30];
int fibo(int i) {
    if (i == 0 || i == 1) memo[i] = i;
    else if (!memo[i])  memo[i] = fibo(i - 1) + fibo(i - 2);
    return memo[i];
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibo(n);

    return 0;
}