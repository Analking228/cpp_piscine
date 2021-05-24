#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request", 72, 45), _Target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other), _Target(other._Target) {

}

const std::string&				RobotomyRequestForm::getTraget() const {
	return _Target;
}

void							RobotomyRequestForm::execute(const Bureaucrat& point) {
	if (!isSigned())
		throw Form::IsNotSignedException();
	if (getToExec() < point.getGrade())
		throw Form::GradeTooLowException();
	if (std::rand() % 2 == 1)
		std::cout << "Makes some drilling noises, and tell us that " << getTraget() <<
		" has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << "Robotomy has failed ((((x-x))))" << std::endl;
}


RobotomyRequestForm&			RobotomyRequestForm::operator=(const RobotomyRequestForm&) {
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}