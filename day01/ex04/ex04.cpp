#include <iostream>
#include <cstdlib>

int			main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string *p_str;
	std::string &r_str = str;

	p_str = &str;

	std::cout << str << std::endl;
	std::cout << p_str << std::endl;
	std::cout << *p_str << std::endl;
	std::cout << r_str << std::endl;
	
	*p_str = "another string";

	std::cout << str << std::endl;
	std::cout << p_str << std::endl;
	std::cout << *p_str << std::endl;
	std::cout << r_str << std::endl;

	r_str = "and string2";
	std::cout << str << std::endl;
	std::cout << p_str << std::endl;
	std::cout << *p_str << std::endl;
	std::cout << r_str << std::endl;



	return (0);
}


	

