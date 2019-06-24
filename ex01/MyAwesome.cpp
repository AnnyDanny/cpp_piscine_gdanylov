#include "MyAwesome.hpp"
#include <iostream>
#include <string>
#include <iomanip>


// MyAwesome::MyAwesome()
// {

// }

// MyAwesome::~MyAwesome()
// {

// }

void MyAwesome::add_information() {
    std::cout << "Enter first name" << std::endl;
    std::cin >> first_name;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter last name" << std::endl;
    std::cin >> last_name;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter nickname" << std::endl;
    std::cin >> nickname;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter login" << std::endl;
    std::cin >> login;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter postal address" << std::endl;
    std::cin >> postal_address;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter email address" << std::endl;
    std::cin >> email_address;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter phone number" << std::endl;
    std::cin >> phone_number;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter birthday date" << std::endl;
    std::cin >> birthday_date;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter favorite meal" << std::endl;
    std::cin >> favorite_meal;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter underwear color" << std::endl;
    std::cin >> underwear_color;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');

    std::cout << "Enter darkest secret" << std::endl;
    std::cin >> darkest_secret;
    if (std::cin.fail())
        exit(0);
    std::cin.ignore(100, '\n');
}

void MyAwesome::print_information() {
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Login: " << login << std::endl;
    std::cout << "Postal address: " << postal_address << std::endl;
    std::cout << "Email address: " << email_address << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Birthday date: " << birthday_date << std::endl;
    std::cout << "Favorite meal: " << favorite_meal << std::endl;
    std::cout << "Underwear color: " << underwear_color << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void MyAwesome::show_information() {
    int i;
    char tmp[11];

    i = 0;
    while (i < 9) {
        tmp[i] = first_name[i];
        i++;
    }
    tmp[i++] = '.';
    tmp[i++] = 0;
    std::cout << std::setw(10);
    std::cout << tmp;
    std::cout << '|';

    i = 0;
    while (i < 9) {
        tmp[i] = last_name[i];
        i++;
    }
    tmp[i++] = '.';
    tmp[i++] = 0;
    std::cout << std::setw(10);
    std::cout << tmp;
    std::cout << '|';

    i = 0;
    while (i < 9) {
        tmp[i] = nickname[i];
        i++;
    }
    tmp[i++] = '.';
    tmp[i++] = 0;
    std::cout << std::setw(10);
    std::cout << tmp;
    std::cout << '|';
}