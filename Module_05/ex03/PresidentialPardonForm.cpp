#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("Presidential Pardon", 25, 5), _Target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), _Target(other._Target) {

}

const std::string&	PresidentialPardonForm::getTraget() const{
	return _Target;
}

void				PresidentialPardonForm::execute(const Bureaucrat& point) {
	if (!isSigned())
		throw Form::IsNotSignedException();
	if (getToExec() < point.getGrade())
		throw Form::GradeTooLowException();
	std::cout << "Tells us " << getTraget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}



PresidentialPardonForm&		PresidentialPardonForm::operator=(const PresidentialPardonForm&) {
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}