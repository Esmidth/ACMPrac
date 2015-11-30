#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node
{
	int pos;
	int num;
};

int main()
{
	int ti;
	std::cin >> ti;
	Node apples[10000] = { '\0',-100};
	for (int i = 0; i < ti;i++)
	{
		cin >> apples[i].pos >> apples[i].num;
	}
	for (int i = 0; i < ti;i++)
	{
		cout << apples[i].pos << " " << apples[i].num;
	}
	cin >> ti;
	return 0;
}