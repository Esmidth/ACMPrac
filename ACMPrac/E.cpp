#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	while (cin >> t)
	{
		if(t > 100 || t < 0)
		{
			cout << "Score is error!\n";
		}
		else if(t >= 90)
		{
			cout << "A\n";
		}
		else if(t >= 80)
		{
			cout << "B\n";
		}
		else if(t >= 70)
		{
			cout << "C\n";
		}
		else if(t >= 60)
		{
			cout << "D\n";
		}
		else if(t >=0)
		{
			cout << "E\n";
		}
	}
}