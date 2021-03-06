#include <exception>




template<typename T>
class Array
{
private:
	T *				_lst;
	unsigned int	_size;
public:
	Array() : _lst(NULL), _size(0) {}

	Array(Array<T> & ref) : _lst(NULL), _size(0) { *this = ref; }

	Array(unsigned int n) : _size(n) { _lst = new T[_size]; }

	~Array()
	{
		if (_size != 0)
			delete [] _lst;
	}
	
	T&			operator[](unsigned int index)
	{
		if (index >= _size)
		{
			throw(Array<T>::OutOfRange());
		}
		return (_lst[index]);
	}

	T&			operator[](unsigned int index) const
	{
		if (index >= _size)
		{
			throw(Array<T>::OutOfRange());
		}
		return (_lst[index]);
	}

	Array<T> &	operator=(Array<T> const & ref)
	{
		if (_lst != NULL)
			delete [] _lst;
		_size = ref._size;
		_lst = new T[_size]();

		unsigned int i;

		i = 0;
		while (i < _size)
		{
			(*this)[i] = ref[i];
			i++;
		}
		return *this;
	}

	class OutOfRange : public std::exception
	{
    public:
        virtual const char* what() const throw()
        {
            return ("Index out of range");
        }
	};
	unsigned int	size(void) const { return _size; };
};

