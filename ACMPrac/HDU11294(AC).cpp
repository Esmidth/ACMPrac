#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;

long generate(long n)
{
	long t = n;
	n = n*2;
	char* num = static_cast<char*>(malloc(sizeof(char) * n)); 
	for (size_t i = 2; i < n; ++i)
		num[i] = 1;
	size_t i = 2;
	while (i * i <= n)
	{
		for (size_t c = 2, idx = 2 * i; idx < n; ++c, idx = i * c)
			num[idx] = 0;
		do
		{
			++i;
		} while (i * i <= n && num[i] == 0);
	}
	int max;
	int t1 = static_cast<int>(t);
	int min;
	for (min = t1; num[min] != 1; min--);
	for (max = t1; num[max] != 1; max++);

	if (abs(min - t) < abs(max - t))
		return min*min;
	else
		return max*max;
}
int main()
{
	int T;
	cin >> T;
	long in;
	for (int i = 0; i < T; i++)
	{
		cin >> in;
		if (in <= 2)
			cout << 4 << endl;
		else
			cout << generate(sqrt(in)) << endl;
	}
	system("pause");
}