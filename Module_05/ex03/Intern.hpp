#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	~Intern();

	Intern(const Intern&);
	Intern&		operator=(const Intern&);

	Form*		makeForm(const std::string& name, const std::string target);
};


#endif