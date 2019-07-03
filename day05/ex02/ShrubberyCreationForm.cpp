#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) {
	*this = copy;
}

ShrubberyCreationForm & operator=(ShrubberyCreationForm const &over) {
	if (*this != &over) {
		this->getCheckSigned(over.CheckSigned);
	}
	return (*this);
}

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm const &over) {
	std::cout yes_no;
	if (over.getCheckSigned()) {
		yes_no = "No signed";
	}
	else {
		yes_no = "Signed";
	}
	std::cout << over.getName() << " is " << yes_no << " form with " over.getGrade() << " to execute" << std::endl;
}






// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const () {
// 	if (bureaucrat.getGrade() > _grade) {
		
// 	}
// 	else {
// 		std::string name1 = this->getName();
// 		std::string name2 = "_shrubbery"
// 		std::str
// 	}
// }