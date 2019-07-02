#include "Bureaucrat.hpp"

int main() {
    std::cout << CYAN << "Incorrect low case" << NORMAL << std::endl;

    try {
        Bureaucrat case0("incorrect low", 0);
    }
    catch(Bureaucrat::GradeTooHighException &exception) {
        std::cout << exception.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &exception) {
        std::cout << exception.what() << std::endl;
    }



    std::cout << PINK << "Incorrect high case" << NORMAL << std::endl;

    try {
        Bureaucrat case1("incorrect high", 151);
    }
    catch (Bureaucrat::GradeTooHighException &exception) {
        std::cout << exception.what() << std::endl;
    }

    catch(Bureaucrat::GradeTooLowException &exception) {
        std::cout << exception.what() << std::endl;
    }



    std::cout << GREEN <<  "Correct case" << NORMAL << std::endl;

    try {
        Bureaucrat case2("Correct", 1);
        std::cout << case2;
    }
    catch (Bureaucrat::GradeTooHighException &exception) {
        std::cout << exception.what() << std::endl;
    }

    catch(Bureaucrat::GradeTooLowException &exception) {
        std::cout << exception.what() << std::endl;
    }







    std::cout << BLUE << " No Increment 1 and No Decrement 1" << NORMAL << std::endl;

    try {
        Bureaucrat case3("Incorrect low case", 1);
        try {
            case3.IncrGrade();
            std::cout << "Increment successfully" << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &exception) {
            std::cout << exception.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &exception) {
            std::cout << exception.what() << std::endl;
        }
        try {
            case3.DecrGrade();
            std::cout << "Decrement successfully" << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &exception) {
            std::cout << exception.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &exception) {
            std::cout << exception.what() << std::endl;
        }
    }
    catch(Bureaucrat::GradeTooHighException &exception) {
        std::cout << exception.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &exception) {
        std::cout << exception.what() << std::endl;
    }



 std::cout << BLUE << " No Decrement 1" << NORMAL <<  std::endl;


    try {
        Bureaucrat case4("Incorrect low case", 150);
        try {
            case4.IncrGrade();
            std::cout << "Increment successfully" << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &exception) {
            std::cout << exception.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &exception) {
            std::cout << exception.what() << std::endl;
        }
        try {
            case4.DecrGrade();
            std::cout << "Decrement successfully" << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &exception) {
            std::cout << exception.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &exception) {
            std::cout << exception.what() << std::endl;
        }
    }
    catch(Bureaucrat::GradeTooHighException &exception) {
        std::cout << exception.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &exception) {
        std::cout << exception.what() << std::endl;
    }
    return (0);
}