#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int m, n;
	int x, y;
	while(cin >> m >> n)
	{
		x = 0;
		y = 0;
		if(m > n)
		{
			for (int i = n; i <= m;i++)
			{
				if(i % 2 == 0)
				{
					x +=(int)pow(i, 2);
				}
				else
				{
					y += (int)pow(i, 3);
				}
			}
		}
		else if(m < n)
		{
			for (int i = m; i <= n;i++)
			{
				if (i % 2 == 0)
				{
					x += (int)pow(i, 2);
				}
				else
				{
					y += (int)pow(i, 3);
				}
			}
		}
		cout << x << " " << y << endl;
	}
}