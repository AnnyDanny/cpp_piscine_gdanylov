#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
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
            ~GradeTooHighException();
            GradeTooHighException(const GradeTooHighException &copy);
            GradeTooHighException & operator=(GradeTooHighException const &over);
            virtual const char* what() const throw();

        };

        class GradeTooLowException : public std::exception {
            public:
            GradeTooLowException();
            ~GradeTooLowException();
            GradeTooLowException(const GradeTooLowException &copy);
            GradeTooLowException & operator=(GradeTooLowException const &over);
            virtual const char* what() const throw();
        };

    private:

        std::string const _name;
        int const _grade;

};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &over);

#endif