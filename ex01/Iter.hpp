
#include <iostream>
#include <cctype>
#include <cstdlib>

template< typename Tel >
void	add(Tel & el)
{
	el++;
}

template< typename Tel >
void	add_char(Tel & el)
{
        int ret;

        ret = 0;

        while (!isprint(ret))
        {
                int val = rand() % 127;

                ret = static_cast<char>(val);
        }
        el += ret;
}

template< typename T >
void print( T const & x) { std::cout << x << std::endl; return; }

template< typename Tarray >
void 	iter(Tarray * array, unsigned int len, void (*pf)(Tarray &))
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		pf(array[i]);
		i++;
	}	
}

template< typename Tarray >
void 	iter(const Tarray * array, unsigned int len, void (*pf)(const Tarray &))
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		pf(array[i]);
		i++;
	}	
}