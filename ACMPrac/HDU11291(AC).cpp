#include "stdafx.h"
#include <iostream>

using namespace std;

void divide(long N,int* sum)
{
	if (N != 1)
	{
		if (N % 2 == 0)
		{
			divide(N / 2, sum);
			divide(N / 2, sum);
		}
		else
		{
			(*sum)++;
			divide(N / 2 + 1, sum);
			divide(N / 2, sum);
		}
	}
}
int main()
{
	int T;
	long N;
	cin >> T;
	int* sum = new int;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		*sum = 0;
		divide(N, sum);
		cout << *sum << endl;
	}
	system("pause");
}