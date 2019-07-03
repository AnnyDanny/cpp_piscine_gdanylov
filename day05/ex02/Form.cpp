#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _grade(0){

}

Form::Form(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade > 150)
           throw GradeTooLowException();
        else if (grade < 1)
          throw GradeTooHighException();
        else
            std::cout << GREEN << "Form called" << NORMAL <<std::endl;
}

Form::Form(Form const & copy) : _name(copy.getName()), _grade( copy.getGrade()){}

std::ostream & operator<<(std::ostream &o, Form const &over) {
    std::cout << over.getName() << ", Form grade " << over.getGrade() << std::endl;
    return o;
}

Form & Form::operator=(Form const &over) {
    // if (this != &over)
    //     this->_grade = over._grade;
    return (*this);
}

Form::~Form() {
    return;
}

std::string Form::getName() const {
    return this->_name;
}

int Form::getGrade() const {
    return this->_grade;
}


void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _grade) {
		throw Form::GradeTooLowException();
	}
	checkSigned = true;
}


bool Form::getCheckSigned() {
	return checkSigned;
}


/************************************ Exceptions ************************************/

Form::GradeTooHighException::GradeTooHighException() {
    return ;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy) {
     *this = copy;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const &over) {
    if (this != &over) {
        *this = over;
    }
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

Form::GradeTooHighException::~GradeTooHighException() throw() {

}






Form::GradeTooLowException::GradeTooLowException() {
    return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy) {
     *this = copy;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const &over) {
    if (this != &over) {
        *this = over;
    }
    return (*this);
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}