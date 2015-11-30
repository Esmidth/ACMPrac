#include "stdafx.h"
#include <cstdio>
#include <iostream>

using namespace std;

const int msize = 1000000;

int memo[msize];

int cal(int n)
{
	if (n >= msize)
		return cal(n / 2) + cal(n - n / 2) + n % 2;
	else
		return memo[n];
}

int main()
{
	memo[1] = memo[0] = 0;
	for (int i = 2; i < msize; i++)
		memo[i] = memo[i / 2] + memo[i - i / 2] + i % 2;

	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		printf("%d\n", cal(n));
	}
	system("pause");
	return 0;
}
