#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int f(int n)
{
	return n == 0 ? 1 : f(n - 1)*n;
}
int main()
{
	printf("%d\n", f(3));
	system("pause");
	return 0;
}