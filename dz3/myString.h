#pragma once
#include<iostream>
class myString
{
private: 
	char* str;
	size_t len;
public:
	myString(const char* s, size_t l);
	myString(const char* s);
	myString(size_t l);
	myString();
	myString(const myString& obj);
	myString(myString&& obj):
		len{obj.len},
		str{obj.str}
	{
		obj.str = nullptr;
		obj.len = 0;
	}
	~myString();

	void setStr(const char* s);
	void setLen(size_t l);

	char* getStr() {return str;}
	int getLen() {return len;}

	friend std::ostream& operator<< (std::ostream& out, const myString& obj) {
		out << obj.str;
		return out;
	}

	friend std::istream& operator>> (std::istream& in, myString& obj) {
		in.getline(obj.str, obj.len);
		return in;
	}

	char operator[](int index)const{
		if (index < len)
			return str[index];
		else
			return str[len - 2];
	}
	
	char& operator [](int index) {
		if (index < len)
			return str[index];
		else
			return str[len-2];
	}

	int operator()(char c) {
		for (int ii = 0; ii < len; ii++) {
			if (str[ii] == c) {
				return ii;
			}
		}
		return -1;
	}




};

