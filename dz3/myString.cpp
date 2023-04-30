#include "myString.h"
#include <string.h>
#include <iostream>

myString::myString(const char* s, size_t l) {
	size_t cap = 0;
	if (s)
		cap = strlen(s);
	if (cap >= l)
		l = cap + 1;
	len = l;
	if (l) {
		str = new char[l] {0};
		if (cap)
			strcpy_s(str, l, s);
	}
	else
		str = 0;
}

myString::myString(const char* s) :
	myString(s, 0)
{}

myString::myString(size_t l):
	myString(nullptr,l)
{}

myString::myString():
	myString(nullptr,80)
{}

myString::myString(const myString& obj) :myString(obj.str, obj.len) {}

myString::~myString() {
	delete[] str;
}

void myString::setStr(const char* s) {
	if (s) {
		if (str)delete[] str;
		str = new char[len];
		strcpy_s(str,len, s);
	}
}

void myString::setLen(size_t l) {
	len = l+1;
}

