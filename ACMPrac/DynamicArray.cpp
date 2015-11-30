#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int len;
	cin >> len;
	int* array_p = new int[len];
	for (int i = 0; i < len;i++)
	{
		*(array_p + i) = i;
		cout << *(array_p + i);
	}
	cout << endl;
	system("pause");
}