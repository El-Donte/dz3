#include "myString.h"
#include <string.h>
#include <iostream>

myString::myString(const char* _str, int _len):
	str{(_str)? new char[strlen(_str)+1]:nullptr},
	len{(_len)? _len:80 }
{
	setStr(_str);
	setLen(_len);
}

myString::myString(const char* _str) :
	myString(_str, strlen(_str)+1)
{}

myString::myString(int _len):
	myString(nullptr,_len)
{}

myString::myString():
	myString(nullptr,NULL)
{}

myString::~myString() {
	delete[] str;
}

void myString::setStr(const char* _str) {
	if (_str) {
		if (str)delete str;
		str = new char[strlen(_str) + 1];
		strcpy_s(str, strlen(_str) + 1, _str);
	}
}

void myString::setLen(int _len) {
	len = _len+1;
}

myString myString::Init(int _len) {

	char* str = new char[_len];
	std::cout << "введите строку: ";
	gets_s(str, _len);
	return myString(str, _len);
}

void myString::Print() {
		if (str) {
			std::cout << "строка:" <<str<<"\n";
		}
}
