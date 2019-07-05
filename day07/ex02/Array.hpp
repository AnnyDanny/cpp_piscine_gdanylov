#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T = int>

class Array {
	private:
		unsigned int _size;
		T *_array;

	public:
		class	OutOfLimits: public std::exception
		{
			public:
				OutOfLimits(void) {}
				~OutOfLimits(void) throw() {}
				char const	*what(void) const throw() { return ("Exceed limits");}
		};
		Array<T>() {
			_array = new T();
			_array = NULL;
			_size = 0;
		}

		Array<T>(unsigned int n) {
			_size = n;
			_array = new T[_size];
		}

		Array<T> (Array<T> const &copy) {
			*this = copy;
		}

		Array<T> & operator=(Array const &over) {
			delete _array;
			_size = over._size;
			_array = new T [_size];

			for (unsigned int i = 0; i < _size; i++)
				_array[i] = over._array[i];
			return *this;
		}

		T &operator[](unsigned int n) throw(OutOfLimits) {
			if (!_array || n >= _size)
				throw(OutOfLimits());
			return _array[n];
		}

		~Array<T> () {
			delete [] _array;
		}

		void setEl(T elem, unsigned int n) {
			this->_array[n] = elem;
		}

		unsigned int size() const {
			return _size;
		}
};



#endif