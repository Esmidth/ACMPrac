#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void print_i(string temp)
{
	string outt = "";
	int ab;
	int bc;
	ab = temp[1] - temp[0];
	bc = temp[2] - temp[1];
	if(bc > 0 && ab > 0)
	{
		//c > b > a
		cout << temp[0] <<" "<< temp[1] <<" "<< temp[2] << endl;
	}
	if(bc > 0 && ab <= 0)
	{
		//c > a>b
		if(abs(bc) > abs(ab))
		{
			cout << temp[1]<<" " << temp[0] <<" "<< temp[2] << endl;
		}
	}
	//b>c>a
	if(temp[2]-temp[0] > 0 && temp[1]-temp[2] > 0)
	{
		cout << temp[0] << " " << temp[2] << " " << temp[1] << endl;
	}
	//b>a>c
	if(temp[1]-temp[0]>0 && temp[0]-temp[2]>0)
	{
		cout << temp[2] << " " << temp[0] << " " << temp[1] << endl;
	}
	//a>c>b
	if(temp[0]-temp[2]>0 && temp[2]-temp[1]>0)
	{
		cout << temp[1] << " " << temp[2] <<" "<< temp[0] << endl;
	}
	if(temp[0]-temp[1]> 0 && temp[1]-temp[2]>0)
	{
		cout << temp[2] << " " << temp[1] << " " << temp[0] << endl;
	}
	//a>b>c
}


int main()
{
	string temp;
	while(cin>>temp)
	{
		print_i(temp);
	}
	return 0;
}