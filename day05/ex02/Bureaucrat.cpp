// int main() 
// { 
//    int x = -1; 
  
//    // Some code 
//    cout << "Before try \n"; 
//    try { 
//       cout << "Inside try \n"; 
//       if (x < 0) 
//       { 
//          throw x; 
//          cout << "After throw (Never executed) \n"; 
//       } 
//    } 
//    catch (int x ) { 
//       cout << "Exception Caught \n"; 
//    } 
  
//    cout << "After catch (Will be executed) \n"; 
//    return 0; 
// } 

#include "Bureaucrat.hpp"
#include <iostream>

// Bureaucrat::Bureaucrat() : _name() {
//     return ;
// }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
        if (grade > 150)
           throw GradeTooLowException();
        else if (grade < 1)
          throw GradeTooHighException();
        else
            std::cout << GREEN << "Bureaucrat called" << NORMAL <<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat & copy) : _name(copy.getName()), _grade( copy.getGrade()){}
  

std::ostream & operator<<(std::ostream &o, Bureaucrat &over) {
    std::cout << over.getName() << ", bureaucrat grade " << over.getGrade() << std::endl;
    return o;
}

// std::ostream & operator<<(std::ostream &o, Bureaucrat const &over)

Bureaucrat & Bureaucrat::operator=(Bureaucrat  &over) {
    if (this != &over)
        this->_grade = over._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {
    return;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade(){
    return this->_grade;
}

void Bureaucrat::IncrGrade() {
    if (_grade - 1 >= 1)
        _grade -= 1;
    else 
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DecrGrade() { 
    if (_grade + 1 <= 150)
        _grade += 1;
    else 
        throw Bureaucrat::GradeTooLowException();
}

 void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
         std::cout <<  _name << " signs " << form.getName() << std::endl;
    }
    catch(std::exception & exc) {
        std::cout <<  _name << " cannot sign " << form.getName() << " because " << exc.what() << std::endl;
    }
 }

/************************************ Exceptions ************************************/

Bureaucrat::GradeTooHighException::GradeTooHighException() {
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy) {
     *this = copy;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &over) {
    if (this != &over) {
        *this = over;
    }
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {

}






Bureaucrat::GradeTooLowException::GradeTooLowException() {
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy) {
     *this = copy;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &over) {
    if (this != &over) {
        *this = over;
    }
    return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}