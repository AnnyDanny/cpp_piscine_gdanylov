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

Bureaucrat::Bureaucrat() {
    
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(0) {
    if(grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else if(grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else {
        _grade = grade;
        std::cout << "Bureaucrat >>>>> called>>>>" << std::endl;
    }

}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
    *this = copy;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &over) {
    std::cout << over.getName() << ", grade" << over.getGrade() << std::endl;
    return o;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &over) {
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

int Bureaucrat::getGrade() const {
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

