#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double x;
	while(cin >> x)
	{
		if (x > 0)
		{
			printf("%.2f\n", x);
		}
		else
			printf("%.2f\n", -x);
	}
}