// 1002.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;
int  main()
{
	float c[1002] = { 0 };
	int m, n, t;
	float num;
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d%f", &t, &num);
		c[t] += num;
	}
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d%f", &t, &num);
		c[t] += num;
	}
	

	int count=0;
	for (t = 1001; t >= 0; t--)
	{
		
		if ((c[t]) != 0)
		{
			count+=1;
		}
	}

	printf("%d ", count);

	for (t = 1001; t >= 0; t--)
	{
		if (c[t] != 0)
		{
			printf("%d %.1f ", t, c[t]);
		}
	}
}
