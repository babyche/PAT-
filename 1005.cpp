// 1005.cpp: 定义控制台应用程序的入口点。


#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;
int main() {
	string a;
	cin >> a;
	int sum = 0;
	for (int i = 0; i < a.length(); i++)
	{
		sum += (a[i] - '0');       //字符'0'的十进制为48
	}
	string s = to_string(sum);
	string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	cout << arr[s[0] - '0'];
	for (int i = 1; i < s.length(); i++)
		cout << " " << arr[s[i] - '0'];
	return 0;
}
