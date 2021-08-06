#pragma once
#ifndef RECORD_H
#define RECORD_H
#include<string>
#include<iostream>
using namespace std;
class record 
{
	string* name;
public:
	record()
	{}
	record(string n) :name(new string)
	{
		*name = n;
	}
	void me()
	{
		cout << *name;
	}
	friend ostream& operator<<(ostream& strn, const record& that);
};
#endif // !RECORD_H


