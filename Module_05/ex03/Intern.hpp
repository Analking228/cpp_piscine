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
	Intern&					operator=(const Intern&);

	Form*					makeForm(const std::string& form, const std::string target);

	class FormNotFoundException : public std::exception {
		virtual const char*	what() const throw();
	};
};


#endif