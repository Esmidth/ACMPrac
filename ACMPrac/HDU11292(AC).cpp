#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, a, b, c;
	int clothes[10000] = { '\0' };
	while (cin >> n >> a >> b >> c)
	{
		int sum = 0;
		int coin = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> clothes[i];
		}
		for (int i = 0; i < n; i++)
		{
			sum += clothes[i];
			if (sum >= a && sum < b)
			{
				sum = 0;
				coin += 2;
			}
			else if (sum >= b && sum < c)
			{
				sum = 0;
				coin += 3;
			}
			else if (sum >= c)
			{
				sum = 0;
				coin += 4;
			}
		}
		cout << coin << endl;
	}
	system("pause");
}