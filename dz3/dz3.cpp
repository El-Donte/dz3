

#include <iostream>
#include "myString.h"
int main()
{
    setlocale(LC_ALL, "");
    myString str1{ "ehrhthjdtjyhthytgtgyrrtgyrtgey",100 };
    myString str2;

    myString* strings = new myString[3]{ str1,str2,myString::Init(100) };

    for (int ii = 0; ii < 3; ii++) {
        strings[ii].Print();
        std::cout << std::endl;
    }


}

