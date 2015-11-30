// ACMPrac.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
using namespace std;

int countPoint(int* num)
{
	int sum = 0;
	for (int i = 0; i < 6;i++)
	{
		sum += *(num + i);
	}
	sum = sum - 3;
	return sum / 3;
}
int triangle(int sum)
{
	if(sum == 1)
	{
		return 6;
	}
	return triangle(sum - 1) + sum * 2 + 3;
}
int main()
{
	int array[6] = {};
	/*
	for (int i = 0; i < 6;i++)
	{
		scanf("%d", &array[i]);
		//cin >> array[i];
	}
	*/
	printf("%d", triangle(countPoint(array)));
}

