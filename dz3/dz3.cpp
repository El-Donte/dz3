

#include <iostream>
#include "myString.h"

int main()
{
    setlocale(LC_ALL, "");
	setlocale(LC_ALL, "Russian");
	myString S3("fwefhiwfiohdrg");
	std::cout << S3 << std::endl;
	std::cout << S3('c') << std::endl;
	std::cout << "copy" << std::endl;
	myString S4(S3);
	std::cout << S4 <<std::endl;


}

