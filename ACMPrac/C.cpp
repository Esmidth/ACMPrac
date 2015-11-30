#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

#define PI 3.1415927

using namespace std;

int main()
{
	double t;
	while(cin >> t)
	{
		printf("%.3f\n", 4* PI * pow(t, 3)/3);
	}
}