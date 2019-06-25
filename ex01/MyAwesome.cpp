#include "MyAwesome.hpp"
#include "ContactData.hpp"
#include <iostream>
#include <string>
#include <iomanip>


MyAwesome::MyAwesome()
{

}

MyAwesome::MyAwesome(ContactData data): _data(data)
{

}

MyAwesome::~MyAwesome()
{

}

void MyAwesome::print_information() {
    std::cout << "First name: " << _data.first_name << std::endl;
    std::cout << "Last name: " << _data.last_name << std::endl;
    std::cout << "Nickname: " << _data.nickname << std::endl;
    std::cout << "Login: " << _data.login << std::endl;
    std::cout << "Postal address: " << _data.postal_address << std::endl;
    std::cout << "Email address: " << _data.email_address << std::endl;
    std::cout << "Phone number: " << _data.phone_number << std::endl;
    std::cout << "Birthday date: " << _data.birthday_date << std::endl;
    std::cout << "Favorite meal: " << _data.favorite_meal << std::endl;
    std::cout << "Underwear color: " << _data.underwear_color << std::endl;
    std::cout << "Darkest secret: " << _data.darkest_secret << std::endl;
}

void MyAwesome::PrintField(const std::string &str) {
    std::cout << std::setw(10);
    if (str.size() > 10) {
        std::cout << str.substr(0, 9) << ".|"; 
    }
    else {
        std::cout << str << '|';
    }
}

void MyAwesome::show_information(const std::string &str) {
   PrintField(str);
   PrintField(_data.first_name);
   PrintField(_data.last_name);
   PrintField(_data.nickname);
   std::cout << std::endl;
}
