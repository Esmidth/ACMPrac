#include "stdafx.h"
#include <iostream>			

void swap(int&a,int&b)
{
	int temp = a;
	a = b;
	b = temp;

}
int main()
{
	int a = 6;
	int b = 4;

	swap(a, b);
	std::cout << a << b;
	system("pause");
}