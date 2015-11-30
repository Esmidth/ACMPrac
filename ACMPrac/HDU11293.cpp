#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;



int a(int a, int b, int c, int d, int d1, int d2)
{
	int Nias[3] = { a,b,c };
	int Aias[3] = { d,d1,d2 };
	int sum_a ;
	//int t;
	//cin >> t;
	//while(t--)
	{
	//	cin >> Nias[0] >> Nias[1] >> Nias[2] >> Aias[0] >> Aias[1] >> Aias[2];
		sort(Nias, Nias+3);
		sort(Aias, Aias+3);
		if(Aias[0] == Aias[1] && Aias[0] == Aias[2])
		{

			if (Nias[2] <= Aias[0])
			{
				printf("%.3f\n", 0.00);
			}
			else if(Nias[1] == Nias[2])
			{
				printf("%.3f\n",static_cast<double>(1)/6);
			}
			else if(Nias[0] == Nias[1] && Nias[2])
				printf("%.3f\n", 0.00);
		}
		else if(Aias[0] == Aias[1] && Aias[2] != Aias[1])
		{
			if (Nias[0] == Nias[1]&& Nias[0] == Nias[2])
			{
				printf("%.3f\n", 1.00);
			}
			if (Nias[0] == Nias[1] && Nias[0] != Nias[2])
			{
				if (Nias[0] < Aias[0])
				{
					if (Nias[2] > Aias[0])
					{
						printf("%.3f\n", (double) 1 / 6);
					}
					else
						printf("%.3f\n", 0.00);
				}
				else if (Nias[0] == Aias[0])
				{
					if (Nias[2] > Aias[2])
					{
						printf("%.3f\n", 1.00);
					}
					else
						printf("%.3f\n", (double) 1 / 6);
				}
				else
				{
					printf("%.3f\n", 1.00);
				}

			}
		}
	}

}
int test()
{
	a(1, 2, 3, 4, 4, 4);//	0
	a(1, 4, 4, 3, 3, 3);//	1/6
	a(1, 2, 5, 3, 3, 3);//	0
	a(3, 3, 3, 1, 1, 2);//	1
	a(2, 2, 4, 3, 3, 5);//	0.167
	a(2, 2, 3, 4, 4, 5);//	0
	a(2, 2, 3, 2, 2, 4);//	0.167
	a(2, 2, 4, 2, 2, 3);//	1
	a(3, 3, 4, 2, 2, 2);//	0.167
	cout << "----------------\n";
	a(2, 3, 5, 3, 3, 4);//	0.333
	a(3, 3, 1, 2, 2, 2);//	0.167
	a(6, 2, 1, 5, 4, 3);//	1.000
	a(1, 2, 3, 4, 4, 1);//	0.000
}
int main()
{
	test();
	system("pause");
}