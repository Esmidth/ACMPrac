#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N;
	int count;
	int i;
	int k;
	while (cin >> N)
	{
		int sub[10000] = { '\0' };
		i = 0;
		k = 2;
		while (true)
		{
			if (N % k == 0)
			{
				N = N / k;
				sub[i] = k;
				i++;
				if (N == 1)
				{
					break;
				}
			}
			else if (N % k != 0)
			{
				k++;
			}

		}
		for (int j = 0; sub[j] != '\0'; j++)
		{
			cout << sub[j] << " " << endl;
		}
	}
}