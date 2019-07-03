#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>


#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define PINK "\033[1;35m"
#define GREEN "\033[1;32m"
#define NORMAL "\033[0m"
#define BLUE "\033[1;24m"

class Bureaucrat;

class Form {
public:
	Form();
	~Form();
	Form(std::string name, int grade);
	Form(Form const &copy);
    Form & operator=(Form const &over);
    std::string getName() const;
    int getGrade() const;
    bool getCheckSigned();
    void beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception {
            public:
            GradeTooHighException();
            ~GradeTooHighException() throw();
            GradeTooHighException(const GradeTooHighException &copy);
            GradeTooHighException & operator=(GradeTooHighException const &over);
            virtual const char* what() const throw();

        };

        class GradeTooLowException : public std::exception {
            public:
            GradeTooLowException();
            ~GradeTooLowException() throw();
            GradeTooLowException(const GradeTooLowException &copy);
            GradeTooLowException & operator=(GradeTooLowException const &over);
            virtual const char* what() const throw();
        };

private:
	std::string const _name;
	int const _grade;
	bool checkSigned;
};


std::ostream & operator<<(std::ostream &o, Form &over);

#endif
