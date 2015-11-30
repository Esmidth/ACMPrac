#include "stdafx.h"
#include <stdio.h>
#include <algorithm>

#define MAX 10000+5
using namespace std;

int main()
{
	int ti;
	int n, m;
	long long k;
	//WA的原因是爆int
	//TL的原因是iostream
	int sum;
	long x[MAX] = { '\0' };
	int p;
	scanf("%d", &ti);
	while (ti--)
	{
		sum = 0;
		scanf("%d%d%I64d", &n, &m, &k);
		for (int i = 0; i < n; i++)
		{
			scanf("%ld", &x[i]);
		}
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &p);
			p--;
			k -= x[p];
			x[p] = -1;
		}
		if (k < 0)
			printf("-1\n");
		else if (0 == k)
			printf("%d\n", m);
		else
		{
			sum += m;
			sort(x, x + n);
			for (int i = m;i < n; i++)
			{
				if (k - x[i] >= 0)
				{
					sum++;
					k -= x[i];
				}
			}
			printf("%d\n", sum);
		}
	}
	system("pause");
}