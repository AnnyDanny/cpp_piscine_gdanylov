#ifndef CONTACTDATA_HPP
#define CONTACTDATA_HPP

#include <string>

struct ContactData {
	std::string first_name, last_name, nickname, login;
    std::string postal_address, email_address, phone_number;
    std::string birthday_date, favorite_meal, underwear_color, darkest_secret;
};

#endif