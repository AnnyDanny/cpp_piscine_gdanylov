#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
        int const _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat & operator=(Bureaucrat const &over);
        std::string getName() const;
        int getGrade() const;
        void IncrGrade();
        void DecrGrade();

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

std::ostream & operator<<(std::ostream &o, Bureaucrat const &over);

#endif