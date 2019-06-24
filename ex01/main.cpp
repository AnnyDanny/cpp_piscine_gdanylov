# include <iostream>
# include <string>
# include <iomanip>
# include "MyAwesome.hpp"


void show_contacts(int count_contacts, MyAwesome *awesome) {
    // int i;

    // i = 0;
    // std::cout << std::setw(10);
    // std::cout << "Number of contact";
    // std::cout << '|';
    // std::cout << std::setw(10);
    // std::cout << "First name";
    // std::cout << '|';
    // std::cout << std::setw(10);
    // std::cout << "Last name";
    // std::cout << '|';
    // std::cout << std::setw(10);
    // std::cout << "Nickname" << std::endl;
    // while (i < count_contacts) {
    //     std::cout << std::setw(10);
    //     std::cout << i;
    //     std::cout << '|';
    //     awesome[i].show_information();
    //     i++;
    // }

    int i;

  i = 0;
  std::cout << std::setw (10);
  std::cout << "index";
  std::cout << '|';
  std::cout << std::setw (10);
  std::cout << "first name";
  std::cout << '|';
  std::cout << std::setw (10);
  std::cout << "last name";
  std::cout << '|';
  std::cout << std::setw (10);
  std::cout << "nickname" << std::endl;
  while (i < count_contacts)
  {
    std::cout << std::setw (10);
    std::cout << i;
    std::cout << '|';
    awesome[i].show_information();
    i++;
}
}

int main(void) {
    int i;
    int count_contacts;
    std::string command;
    MyAwesome awesome[8];

    count_contacts = 0;
    while (command != "EXIT") {
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
        if (command == "ADD" && count_contacts == 8) {
            std::cout << "MyAwesome is full" << std::endl;
        }
        if (command == "ADD" && count_contacts < 8) {
            awesome[count_contacts].add_information();
            count_contacts++;
        }
        if (command == "SEARCH") {
            show_contacts(count_contacts, awesome);
            std::cout << "Choose number of contacts" << std::endl;
            std::cin >> i;
            if (std::cin.fail())
                exit (0);
                // cin.ignore();
                // cout<<"Wrong! Enter a #!"<<endl;
            if (i >= 0 && i < count_contacts)
                awesome[i].print_information();
            else
                std::cout << "Incorrect number of contacts" << std::endl;
            continue;
        }
    }
}