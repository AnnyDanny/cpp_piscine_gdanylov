#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Form.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define PINK "\033[1;35m"
#define GREEN "\033[1;32m"
#define NORMAL "\033[0m"
#define BLUE "\033[1;24m"

class Bureaucrat {
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat & operator=(Bureaucrat &over);
        std::string getName() const;
        int getGrade();
        void IncrGrade();
        void DecrGrade();
        void signForm(Form &form);

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



};

std::ostream & operator<<(std::ostream &o, Bureaucrat &over);

#endif