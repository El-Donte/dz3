#pragma once
class myString
{
private: 
	char* str;
	int len;
public:
	myString(const char* _str, int _len);
	myString(const char* _str);
	myString(int _len);
	myString();
	~myString();

	void setStr(const char* _str);
	void setLen(int _len);

	char* getStr() {return str;}
	int getLen() {return len;}

	void Print();
	static myString Init(int _len);



};

