#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool char2(string s)
{

}

bool char2(int x)
{
	return 'r';
}
class makeLove {
private:
	int fuck_i_;
	string fucks_string_;
public:

	friend std::ostream& operator<<(std::ostream& os, const makeLove& obj)
	{
		return os
				<< "fuck_i_: " << obj.fuck_i_
				<< " fucks_string_: " << obj.fucks_string_;
	}

	makeLove(int fuck_i, const string& fucks_string)
		: fuck_i_(fuck_i),
		  fucks_string_(fucks_string)
	{
	}

	makeLove(const makeLove& other)
		: fuck_i_(other.fuck_i_),
		  fucks_string_(other.fucks_string_)
	{
	}

	makeLove(makeLove&& other)
		: fuck_i_(other.fuck_i_),
		  fucks_string_(std::move(other.fucks_string_))
	{
	}

	makeLove& operator=(const makeLove& other)
	{
		if (this == &other)
			return *this;
		fuck_i_ = other.fuck_i_;
		fucks_string_ = other.fucks_string_;
		return *this;
	}

	makeLove& operator=(makeLove&& other)
	{
		if (this == &other)
			return *this;
		fuck_i_ = other.fuck_i_;
		fucks_string_ = std::move(other.fucks_string_);
		return *this;
	}
};

class make_love: public makeLove
{
public:
	make_love(int fuck_i, const string& fucks_string)
		: makeLove(fuck_i, fucks_string)
	{
	}

	explicit make_love(const makeLove& other)
		: makeLove(other)
	{
	}

	explicit make_love(makeLove&& other)
		: makeLove(other)
	{
	}

};

int main()
{
	int ti;
	cin >> ti;
	vector<string> x;
	string temp;
	for (int i = 0; i < ti; i++){
		cin >> temp;
		
	}

	system("pause");
	
}
