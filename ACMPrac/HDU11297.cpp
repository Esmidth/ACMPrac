#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
bool isFib(long k)
{
	int a = 0;
	int b = 1;
	int temp;
	while (true)
	{
		if(k > a && k < b)
		{
			return false;
		}
		if(k == a || k== b)
		{
			return true;
		}
		temp = a;
		a = b;
		b = temp + a;
	}
}
int main()
{
	vector<int> family;
	family.push_back(-1);
	int nn[1000] = {'\0'};
	int n, m;
	long k[1000] = { '\0' };
	int u, v;
	int fa_i = 0;
	cin >> n >> m;
	if(n == 1 || m == 0)
	{
		cin >> n >> m;
		if (isFib(n) || isFib(m))
		{
			cout << 1 << endl;
		}
		else
			cout << 0 << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cin >> k[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> u >> v;
			u--;
			v--;
			if (nn[u] == 0)
			{
				if(nn[v] != 0)
				{
					nn[u] = nn[v];
				}
				else
				{
					fa_i++;
					nn[u] = fa_i;
					nn[v] = fa_i;
				}
			}
			else
			{
				if (nn[v] == 0)
				{
					nn[v] = nn[u];
				}
				else
				{
					int tempfa = nn[v];
					for (int ii = 0; ii < n;ii++)
					{
						if(nn[ii] == tempfa)
						{
							nn[ii] = nn[u];
						}
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			if(nn[i] >= family.size())
			{
				family.push_back(0);
			}
			if (isFib(k[i]))
			{
				family[nn[i]]++;
			}
		}
		int max = 0;
		for (int i = 1; i < family.size(); i++)
		{
			if (family[i] > max)
			{
				max = family[i];
			}
		}
		cout << max << endl;
	}
	system("pause");
}
