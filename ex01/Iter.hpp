
#include <iostream>
#include <cctype>
#include <cstdlib>

template< typename Tel >
void	add(Tel & el, unsigned int i)
{
	el++;
	(void)i;
}

template< typename Tel >
void	add_char(Tel & el, unsigned int i)
{
        int ret;

        ret = 0;

        while (!isprint(ret))
        {
                int val = rand() % 127;

                ret = static_cast<char>(val);
        }
        el += ret;
		(void)i;
}


template< typename Tel >
void	print(Tel & el, unsigned int i)
{
	std::cout << "el[" << i << "]= " << el << std::endl;
}

template< typename Tarray, typename Tel >
void 	iter(Tarray * array, unsigned int len, void (*pf)(Tel & ref, unsigned int i))
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		pf(array[i], i);
		i++;
	}	
}