#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "MyAwesome.hpp"

class PhoneBook {
	enum Command{
		ADD, SEARCH, EXIT, NUM_OF_COMMANDS
	};

public:
	PhoneBook();
	~PhoneBook();

	void run();

private:
	Command getCommand();
	void Add();
	void Search();
	void Exit();
	void GetField(const std::string &msg, std::string *field);

	MyAwesome _contacts[8];
	int _count;
};

#endif
