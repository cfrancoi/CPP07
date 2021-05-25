
#include <string>
#include <iostream>
#include "whatever.hpp"

class
Awesome {
        public:
        Awesome( int n ) : _n( n ) {}
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get( void ) const { return this->_n; }
		private:
        	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main()
{
	int a = 15;
	int b = 16;

	::swap(a, b);
	std::cout << "a :" << a << "| b :" << b << std::endl;
	std::cout << "min(a , b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a , b) = " << ::max(a, b) << std::endl;

	std::string str_a = "string_a";
	std::string str_b = "string_b";

	::swap(str_a, str_b);
	std::cout << "str_a :" << str_a << " | str_b :" << str_b << std::endl;
	std::cout << "min(str_a , str_b) = " << ::min(str_a, str_b) << std::endl;
	std::cout << "max(str_a , str_b) = " << ::max(str_a, str_b) << std::endl;

	Awesome c(16);
	Awesome d(17);

	std::cout << "c :" << c << "| d :" << d << std::endl;
	std::cout << "min(c , d) = " << min(c, d) << std::endl;
	std::cout << "max(c , d) = " << max(c, d) << std::endl;


	return 0;
}