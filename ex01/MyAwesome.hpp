#ifndef MYAWESOME_HPP
#define MYAWESOME_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ContactData.hpp"


class MyAwesome {
    public:
    	MyAwesome(ContactData data);
    	MyAwesome();
        ~MyAwesome();

    void show_information(const std::string &str);
    void print_information();

	private:
		void PrintField(const std::string &str);
		ContactData _data;
};

#endif