#include "stdafx.h"
#include <cstdio>

using namespace std;

int v[10000];

int main()
{
	int n, a, b, c;
	while (scanf("%d%d%d%d", &n, &a, &b, &c))
	{
		for (int i = 0; i < n; i++)
			scanf("%d", &v[i]);
		int t = 0, p = 0;
		for (int i = 0; i < n; i++)
		{
			t += v[i];
			if (t >= c)
				p += 4;
			else if (t >= b)
				p += 3;
			else if (t >= a)
				p += 2;
			if (t >= a)
				t = 0;
		}
		printf("%d\n", p);
	}
	return 0;
}
