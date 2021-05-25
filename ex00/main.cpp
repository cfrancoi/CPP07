
#include <string>
#include <iostream>
#include "whatever.hpp"



int main()
{
	int a = 15;
	int b = 16;

	::swap<int>(a, b);
	std::cout << "a :" << a << "| b :" << b << std::endl;
	std::cout << "min(a , b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a , b) = " << ::max(a, b) << std::endl;

	std::string str_a = "string_a";
	std::string str_b = "string_b";

	::swap(str_a, str_b);
	std::cout << "str_a :" << str_a << " | str_b :" << str_b << std::endl;
	std::cout << "min(str_a , str_b) = " << ::min(str_a, str_b) << std::endl;
	std::cout << "max(str_a , str_b) = " << ::max(str_a, str_b) << std::endl;

	return 0;
}