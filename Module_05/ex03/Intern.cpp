#include "Intern.hpp"
#include <iostream>

Intern::Intern() {

}

Intern::Intern(const Intern&) {

}

Form*				Robotomy(std::string const& target) {
	return new RobotomyRequestForm(target);
}

Form*				Pardon(std::string const& target) {
	return new PresidentialPardonForm(target);
}

Form*				Shrubbery(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

const char*			Intern::FormNotFoundException::what() const throw() {
	return "Error: Form not found";
}

Form*				Intern::makeForm(const std::string& form, const std::string target) {
	Form*		(*_Methods[])(const std::string&) = {
		&Pardon,
		&Robotomy,
		&Shrubbery
	};
	std::string	_Forms[] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (int i = 0; i < 3; i++){
		if (_Forms[i] == form){
			std::cout << "Intern creates " << form << " form:" << i << std::endl;
			return _Methods[i](target);
		}
	}
	throw FormNotFoundException();
	return nullptr;
}

Intern&				Intern::operator=(const Intern&) {
	return *this;
}

Intern::~Intern() {

}