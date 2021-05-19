#include <iostream>
#include <string>
#include "Iter.hpp"



int main()
{
	srand(time(NULL));
	int array[10] = {10, 9, 8, 7 ,6, 5, 4,3,2,1};

	

	iter<int>(static_cast<int *>(array), 10 , &print<int>);
	iter(static_cast<int *>(array), 10 , &add<int>);
	iter<int>(static_cast<int *>(array), 10 , &print<int>);

	std::string lst[7];

	std::string *str = lst;

	iter(str, 7 , &add_char<std::string>);
	iter(str, 7 , &add_char<std::string>);
	iter(str, 7 , &add_char<std::string>);
	iter(str, 7 , &add_char<std::string>);
	iter(str, 7 , &print<std::string>);



	return 0;
}