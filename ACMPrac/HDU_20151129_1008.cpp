#include "stdafx.h"
#include <cstdio>
#include <algorithm>

using namespace std;

int x[10000];
int p[10000];

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, m;
		long long k;
		scanf("%d%d%I64d", &n, &m, &k);
		for (int i = 0; i < n; i++)
			scanf("%d", &x[i]);
		for (int i = 0; i < m; i++)
			scanf("%d", &p[i]);
		int c = 0;
		for (int i = 0; i < m; i++)
		{
			c++;
			k -= x[p[i] - 1];
			x[p[i] - 1] = 2147483647;
		}
		if (k < 0)
			printf("-1\n");
		else
		{
			sort(&x[0], &x[n]);
			for (int i = 0; k >= x[i] && i < n; i++)
			{
				k -= x[i];
				c++;
			}
			printf("%d\n", c);
		}
	}
	return 0;
}
