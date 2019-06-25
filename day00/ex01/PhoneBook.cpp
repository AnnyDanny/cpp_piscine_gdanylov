#include "PhoneBook.hpp"
#include "ContactData.hpp"

std::string f_name("Enter first name");
std::string l_name("Enter last name");
std::string nickname("Enter nickname");
std::string login("Enter login");
std::string p_address("Enter postal address");
std::string email("Enter email address");
std::string b_day("Enter birthday date");
std::string meal("Enter favorite meal");
std::string u_color("Enter underwear color");
std::string secret("Enter darkest secret");

PhoneBook::PhoneBook() : _count(0) {
}

PhoneBook::~PhoneBook() {}

void PhoneBook::run() {
	while (true) {
		Command command = getCommand();
		switch (command) {
			case ADD :
				Add();
				break;
			case SEARCH :
				Search();
				break;
			case EXIT :
				Exit();
				break;
			default :
				std::cout << "Error" << std::endl;
		}
	}
}

void PhoneBook::Add() {
	ContactData data;

	if (_count == 8)
		return ;
	GetField(f_name, &data.first_name);
	GetField(l_name, &data.last_name);
	GetField(nickname, &data.nickname);
	GetField(login, &data.login);
	GetField(p_address, &data.postal_address);
	GetField(email, &data.email_address);
	GetField(b_day, &data.birthday_date);
	GetField(meal, &data.favorite_meal);
	GetField(u_color, &data.underwear_color);
	GetField(secret, &data.darkest_secret);

	_contacts[_count] = MyAwesome(data);
	_count++;
	std::cout << "Count: " << 10 << std::endl;
}

void PhoneBook::Search() {
	std::cout << "     index|first name| last name|  nickname" << std::endl;

	for (int i = 0; i < _count; i++) {
		_contacts[i].show_information(std::to_string(i));
	}
	std::cout << "Choose number of contacts" << std::endl;
	uint8_t index;
	std::cin >> index;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');
    std::cout << index << std::endl;
    if (index >= _count) {
    	std::cout << "Out of range" << std::endl;
    	return ;
    }
    _contacts[index].print_information();
}

void PhoneBook::Exit() {
	exit(0);
}

void PhoneBook::GetField(const std::string &msg, std::string *field) {
	std::cout << msg << std::endl;
    std::cin >> *field;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');
}

PhoneBook::Command PhoneBook::getCommand() {
    std::string command;

    while (true) {
        std::cout << "Please enter ADD SEARCH or EXIT" << std::endl;
        std::cin >> command;
        if (std::cin.fail())
            exit (0);
            // cin.ignore();
            // cout<<"Wrong! Enter a #!"<<endl;
        if (command != "ADD" && command != "SEARCH" && command != "EXIT") {
            std::cout << "Incorrect command, try again!" << std::endl;
            continue ;
        }
        if (command == "ADD") {
            return ADD;
        }
        if (command == "SEARCH") {
        	return SEARCH;
        }
        if (command == "EXIT") {
        	return EXIT;
        }
    }
}

