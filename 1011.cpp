// 1011.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setprecision(2) << 1.1111;
	float a,fmax=1.0;
	int  k[3];
	for ( int i = 0; i < 3; i++)
	{
		float max = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			if (a > max)
			{
				max = a;
				k[i] = j;
			}
		}
		fmax *= max;
	}
	char wtl[3] = { 'W','T','L' };
	for (int i = 0; i < 3; i++)
	{
		cout << wtl[k[i]]<<" ";
	}
	cout << setprecision(3)<<(fmax * 0.65 - 1) * 2<<" ";
	return 0;
}

