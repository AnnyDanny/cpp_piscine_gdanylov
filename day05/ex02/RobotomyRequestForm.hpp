#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


class RobotomyRequestForm {
    public:
        RobotomyRequestForm();
	    ~RobotomyRequestForm();
	    RobotomyRequestForm(std::string target);
	    RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm & operator=(RobotomyRequestForm const &over);
        void execute(Bureaucrat const & executor) const;

    private:
    	bool check;
};

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm const &over);


#endif