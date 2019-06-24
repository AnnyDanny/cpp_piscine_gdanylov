#ifndef MYAWESOME_HPP
#define MYAWESOME_HPP

#include <iostream>
#include <string>
#include <iomanip>


class MyAwesome {
    public:
        MyAwesome() {};
        ~MyAwesome() {};
    std::string first_name, last_name, nickname, login;
    std::string postal_address, email_address, phone_number;
    std::string birthday_date, favorite_meal, underwear_color, darkest_secret;

    void add_information();
    void show_information();
    void print_information();
};

#endif