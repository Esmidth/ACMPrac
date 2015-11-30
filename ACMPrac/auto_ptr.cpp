#include "stdafx.h"
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Report
{
private:
	string str;
public:
	Report(const string s) :str(s)
	{
		cout << "Object created!\n";
	}
	~Report()
	{
		cout << "Object deleted\n";
	}
	void comment()const
	{
		cout << str << endl;
	}
};

int main()
{
	shared_ptr<string> films[5] = {
		shared_ptr<string>(new string("Fowl Balls")),
		shared_ptr<string>(new string("Duck Walks")),
		shared_ptr<string>(new string("Chicken Runs")),
		shared_ptr<string>(new string("Turkey Errors")),
		shared_ptr<string>(new string("Goose Eggs"))
	};
	shared_ptr<string> pwin;
	pwin = films[2];

	cout << "The nominess for best avian baseball films are\n";
	for (int i = 0; i < 5;i++)
	{
		cout << *films[i] << endl;
	}
	cout << "The winner is " << *pwin << endl;
	cin.get();
	return 0;

}
