#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
		return false;
	else
	{
		for (int i = 2; i<n; i++)
		{
			if (n%i == 0)
			{
				return false;
			}
		}
		return true;
	}

}
int main()
{

	int N;
	cin >> N;
	while (N--)
	{
		int X;
		cin >> X;
		int p1, p2;
		p1 = p2 = X;
		if (X == 1)
		{
			cout << X + 1 << endl;

		}
		else
		{

			while (!isPrime(p1))
				p1++;
			while (!isPrime(p2))
				p2--;
			if (p1 == p2)
				cout << p1 << endl;
			else if (p1 - X == X - p2)
			{
				cout << p1 << endl;
			}
			else if (p1 - X>X - p2)
				cout << p2 << endl;
			else
				cout << p1 << endl;
		}
	}
	system("pause");
	return 0;
}