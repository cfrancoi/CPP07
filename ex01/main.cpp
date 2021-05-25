#include <iostream>
#include <string>
#include "Iter.hpp"
#include <array>

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }



int main()
{
	srand(time(NULL));
	int array[10] = {10, 9, 8, 7 ,6, 5, 4,3,2,1};

	iter(array, 10 , &add);
	iter(array, 10 , &add_char);
	iter(array, 10 , &print);

	std::string lst[7];

	iter(lst, 7 , &add_char);
	iter(lst, 7 , &add_char);
	iter(lst, 7 , &add_char);
	iter(lst, 7 , &add_char);
	iter(lst, 7 , &print);

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}