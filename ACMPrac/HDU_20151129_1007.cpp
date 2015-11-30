#include "stdafx.h"
//并查集
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Union // arranged
{
public:
	Union(int n)
	{
		for (int i = 0; i <= n; i++) 
			anc.push_back(i), cnt.push_back(0);
	}
	int find(int x) 
	{ /* be careful of stack overflow */
		if (anc[x] == x) 
			return x; 
		anc[x] = find(anc[x]); 
		return anc[x]; 
	}
	void connect(int x, int y)
	{
		if (isConnected(x, y)) 
			return; 
		int t = count(x); 
		anc[find(x)] = find(y); 
		cnt[find(y)] += t;
	}
	bool isConnected(int x, int y)
	{
		return find(x) == find(y);
	}
	int count(int x)
	{
		return cnt[find(x)];
	}
//protected:
	vector<int> anc;
	vector<int> cnt;
};


int main()
{
	vector<int> fb;
	fb.push_back(1);
	fb.push_back(1);
	int i = 1;
	int j = 1;
	while (j < 1000000000)
	{
		int k = i + j;
		fb.push_back(k);
		i = j;
		j = k;
	}
	int n, m;
	while (~scanf("%d%d", &n, &m))
	{
		Union u(n);
		for (int ii = 1; ii <= n; ii++)
		{
			int x;
			scanf("%d", &x);
			if (upper_bound(fb.begin(), fb.end(), x) - lower_bound(fb.begin(), fb.end(), x))
				u.cnt[ii]++;
		}
		for (int ii = 0; ii < m; ii++)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			u.connect(a, b);
		}
		int ma = 0;
		for (int ii = 0; ii < u.cnt.size(); ii++)
			ma = max(ma, u.cnt[ii]);
		printf("%d\n", ma);
	}
	return 0;
}