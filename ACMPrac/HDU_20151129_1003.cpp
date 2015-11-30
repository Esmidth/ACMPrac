#include "stdafx.h"
#include <cstdio>
#include <algorithm>

using namespace std;

class Dices
{
	enum Type
	{
		SINGLE = 1,
		PAIR = 2,
		TRIPLE = 3
	};
public:
	Dices(int* v)
	{
		int nv[3];
		for (int i = 0; i < 3; i++)
			nv[i] = v[i];
		sort(&nv[0], &nv[3]);
		if (nv[0] == nv[1] && nv[1] == nv[2])
		{
			k = TRIPLE;
			a = b = c = nv[0];
		}
		else if (nv[0] == nv[1])
		{
			k = PAIR;
			a = b = nv[0];
			c = nv[2];
		}
		else if (nv[1] == nv[2])
		{
			k = PAIR;
			a = b = nv[1];
			c = nv[0];
		}
		else
		{
			k = SINGLE;
			a = nv[2];
			b = nv[1];
			c = nv[0];
		}
	}
	bool win(const Dices &d) const
	{
		return k != d.k ?(k > d.k ):(a != d.a) ?a > d.a :b != d.b ? b > d.b :c > d.c;
	}
protected:
	Type k;
	int a;
	int b;
	int c;
};

double possibility(int d, int *a, int *b)
{
	double p = 0;
	int na[3];
	for (int i = 0; i < 3; i++)
		na[i] = a[i];
	for (int i = 1; i <= 6; i++)
	{
		na[d - 1] = i;
		p += Dices(na).win(Dices(b));
	}
	return p / 6;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a[3], b[3];
		for (int i = 0; i < 3; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < 3; i++)
			scanf("%d", &b[i]);
		double p0 = Dices(a).win(b);
		double p1 = possibility(1, a, b);
		double p2 = possibility(2, a, b);
		double p3 = possibility(3, a, b);
		printf("%.3f\n", max(max(max(p0, p1), p2), p3));
	}
	return 0;
}
