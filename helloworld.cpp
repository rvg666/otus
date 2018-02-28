#include <iostream>

#include "lib.h"

using namespace version;
int main()
{
	std::cout << "Started version: "
              << major() << '.' << minor() << '.' << patch() 
              << std::endl;
			  
	std::cout << "Hello world!!!\n";
	return 0;
}
