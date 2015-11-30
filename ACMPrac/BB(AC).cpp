#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int m, n;
	int x, y;
	int ress;
	vector<int> res;
	while (cin >> m >> n)
	{
		res.clear();
		if (m > n)
		{
			y = m;
			x = n;
		}
		else
		{
			y = n;
			x = m;
		}
		for (int i = x; i <= y; i++)
		{
			ress = pow(i / 100, 3) + pow((i % 100) / 10, 3) + pow(((i % 100) % 10), 3);
			if (ress == i)
			{
				res.push_back(ress);
			}
		}
		if(res.size() == 0)
		{
			cout << "no\n";
		}
		else
		{
			for (int i = 0; i < res.size() - 1; i++)
			{
				cout << res[i] << " ";
			}
			cout << res[res.size() - 1] << endl;
		}
	}
}