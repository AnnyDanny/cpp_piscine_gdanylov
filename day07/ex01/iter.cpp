#include <iostream>


template <typename type>
void iter(type *arr, int len, void (*f)(type &)) {

	int i = 0;

	while (i < len) {
		(*f)(arr[i]);
		i++;
	}
}

template <typename type>
void printEl(type &arr) {
	std::cout << arr << std::endl;
}

int main(){
	std::cout << "\033[0;36m" << " Int testing " << std::endl;
	int arr1[3] = {-1, 0, 1};
	::iter(arr1, 3, &printEl);
	std::cout << std::endl;

	std::cout << "\033[0;34m" << " Float testing " << std::endl;
	float arr2[3] = {5.67, 3.54, 0.19};
	::iter(arr2, 3, &printEl);
	std::cout << std::endl;

	std::cout << "\033[0;32m" << " String testing " << std::endl;
	std::string arr3[3] = {"first", "second", "third"};
	::iter(arr3, 3, &printEl);
	std::cout << std::endl;
}