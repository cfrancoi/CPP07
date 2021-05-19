#include "Array.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

#include <exception>

int main() {

	Array<int> c(15);
	int i = 0;

	while (i != -1)
	{
		try {
			c[i] = rand();
			i++;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
			i = -1;
		}
	}
	i = 0;
	while (i != -1)
	{

		try {
			std::cout << c[i] << std::endl;
			i++;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
			i = -1;
		}
	}


	return 0;
}