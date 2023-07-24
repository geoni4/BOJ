#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("./resources/2/5000/25501.txt", "r", stdin);
	cin.tie(nullptr), cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		string tmp;
        cin >> tmp;
        int cnt = 0;
        bool isPalindrome = 1;
        int size = tmp.size();
        for (int i = 0; i < size/2+1; i++) {
            cnt++;
            if (tmp[i] != tmp[size - 1 - i]) {
                isPalindrome = 0;
                break;
            }
        }
        cout << isPalindrome << " " << cnt << '\n';
	}
	return 0;
}


/*

https://www.acmicpc.net/problem/25501

����� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 �� (�߰� �ð� ����) 	1024 MB (�߰� �޸� ����)	16852	8972	7784	54.759%
����

���ִ� �Ĺ���� ��� �Լ��� �� �ٷ�� ����� �������� �˾ƺ��� ���� ��� �Լ��� ���õ� ������ �����ϱ�� �ߴ�.

�Ӹ�����̶�, �տ������� �о��� ���� �ڿ������� �о��� ���� ���� ���ڿ��� ���Ѵ�. �Ӹ������ ���÷� AAA, ABBA, ABABA ���� �ְ�, �Ӹ������ �ƴ� ���ڿ��� ���÷� ABCA, PALINDROME ���� �ִ�.

� ���ڿ��� �Ӹ�������� �Ǻ��ϴ� ������ ��� �Լ��� �̿��� ���� �ذ��� �� �ִ�. �Ʒ� �ڵ��� isPalindrome �Լ��� �־��� ���ڿ��� �Ӹ�����̸� 1, �Ӹ������ �ƴϸ� 0�� ��ȯ�ϴ� �Լ���.

#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    printf("ABBA: %d\n", isPalindrome("ABBA")); // 1
    printf("ABC: %d\n", isPalindrome("ABC"));   // 0
}

���ִ� ���� �ۼ��� isPalindrome �Լ��� �̿��Ͽ� � ���ڿ��� �Ӹ�������� ���θ� �Ǵ��Ϸ��� �Ѵ�.

��ü�����δ�, ���ڿ�

$S$�� isPalindrome �Լ��� ���ڷ� �����Ͽ� �Ӹ���� ���θ� ��ȯ������ �˾Ƴ� ���̴�. ���Ҿ� �Ǻ��ϴ� �������� recursion �Լ��� �� �� ȣ���ϴ��� �� ���̴�.

���ָ� ���� �����е� �Լ��� ��ȯ���� recursion �Լ��� ȣ�� Ƚ���� ���غ���.
�Է�

ù° �ٿ� �׽�Ʈ���̽��� ����
$T$�� �־�����. (

$1 \leq T \leq 1\,000$)

��° �ٺ���
$T$���� �ٿ� ���ĺ� �빮�ڷ� ������ ���ڿ� $S$�� �־�����. (

$1 \leq \vert S\vert \leq 1\,000$)
���

�� �׽�Ʈ���̽�����, isPalindrome �Լ��� ��ȯ���� recursion �Լ��� ȣ�� Ƚ���� �� �ٿ� �������� �����Ͽ� ����Ѵ�.
���� �Է� 1

5
AAA
ABBA
ABABA
ABCA
PALINDROME

���� ��� 1

1 2
1 3
1 3
0 2
0 1

��Ʈ

Python 3

def recursion(s, l, r):
    if l >= r: return 1
    elif s[l] != s[r]: return 0
    else: return recursion(s, l+1, r-1)

def isPalindrome(s):
    return recursion(s, 0, len(s)-1)

print('ABBA:', isPalindrome('ABBA'))
print('ABC:', isPalindrome('ABC'))

Java 15

public class Main{
    public static int recursion(String s, int l, int r){
        if(l >= r) return 1;
        else if(s.charAt(l) != s.charAt(r)) return 0;
        else return recursion(s, l+1, r-1);
    }
    public static int isPalindrome(String s){
        return recursion(s, 0, s.length()-1);
    }
    public static void main(String[] args){
        System.out.println("ABBA: " + isPalindrome("ABBA"));
        System.out.println("ABC: " + isPalindrome("ABC"));
    }
}

��ó

High School > �������ͳݰ���б� > 2022 ���� ���� �˰����ô�ȸ A��

    ������ �˼��� ���: cgiosy, chansol, junseo, kyo20111, ryute, stonejjun03
    ������ ���� ���: jhnah917

�˰��� �з�

    ����
    ���ڿ�
    ���

�޸�

*/